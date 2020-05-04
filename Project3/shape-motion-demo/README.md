# Project 3: Graphical LCD Toy 
## Introduction

The following set of code uses all 4 switches on the top board.
To run the code on the msp430 you have to be in the following directory:
lcdtoy-ruthtrejo/Project3/shape-motion-demo/
Once you are in the shape-motion-demo directory, you can enter the following
command to run the program.
> make load

This will display three different shapes. A green square, pink circly, and
smaller pink circle. When switch 1 is held the shapes will move, if the switch
is not held the shapes will remain whenever they left off before the switch
was not pressed.

Switch 2 will display the star of David.

Switch 3 will display a filled in diamond shape.

Switch 4 will display 4 dad jokes and make a sound whenever the switch is
pressed. The button must be pressed in order for a new joke to appear on the screen.

Moving back and forth with the switches is do-able as well.

--------------------------------------------------------------------------------------------

Special for Spring 2020

- Dynamically render graphical elements that move and change, and multiple sounds
-- including one original algorithmically rendered graphical element 
- Some text must should be rendered from an ASCII string.
-- using a font other than 5x7
- Graphical rendering must be performed by an interruptable foreground task
-- that sleeps when there is nothing to update
- The program's behavior must change in response to button presses and the progress of time
-- Sensitivity to time and buttons must be interrupt driven
