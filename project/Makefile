

SRC = home.o state_machine.o timer.o buttons.o buzzer.o led.o binary_count.o font-5x7.o font-8x12.o lcdutils.o lcddraw.o lcdx.o
CPU		= msp430g2553
CFLAGS		= -mmcu=${CPU} -I../h
LDFLAGS = ../demos/lib/libTimer.a -L/opt/ti/msp430_gcc/include

# Switch the compiler (for the internal make rules)
CC		= msp430-elf-gcc
AS		= $(CC);

all: blinky_buzzy_toy.elf

#Additional rules for files
blinky_buzzy_toy.elf: ${SRC} ../demos/lib/libTimer.a

	${CC} $(CFLAGS) $(LDFLAGS) -o $@ $^


load: blinky_buzzy_toy.elf
	mspdebug rf2500 "prog $^"


clean:
	rm -f *.o *.elf

tiddyUp:
	rm -f *.o~ *.s~ *.c~ *.h~ 
