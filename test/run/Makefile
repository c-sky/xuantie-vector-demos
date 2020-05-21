
CROSS_COMPILE	= riscv64-unknown-linux-gnu-
CC		= $(CROSS_COMPILE)gcc
CXX		= $(CROSS_COMPILE)g++
OBJDUMP		= $(CROSS_COMPILE)objdump

CFLAGS  ?= -O2 -march=rv64gcvxthead -mabi=lp64v  
LDFLAGS ?= -march=rv64gcvxthead -mabi=lp64v

CFLAGS  += -g -static

LDFLAGS += -g -static -lm

ifeq ("$(origin V)", "command line")
        KBUILD_VERBOSE = $(V)
endif
ifndef KBUILD_VERBOSE
        KBUILD_VERBOSE = 0
endif

ifeq ($(KBUILD_VERBOSE),1)
        Q =
ifndef VERBOSE
        VERBOSE = 1
endif
export VERBOSE
else
        Q = @
endif



SRCS := $(wildcard *.c) $(wildcard *.cpp)

TARGET :=  $(patsubst %.c, %.elf,$(SRCS))
OBJDIR = .
.PHONY : clean

%.elf:%.c
	@echo "  CC   $@"
	$(Q)#$(CC) $(CFLAGS) -E $< -o $<.i
	$(Q)#$(CC) $(CFLAGS) -S $< -o $<.s
	$(Q)$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)
	$(Q)#$(OBJDUMP) -S $@ > $@.asm
all: $(TARGET)

clean:
	$(RM) *.o *.elf *.asm *.s
