/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "buttons.h"
/** Initializes everything, clears the screen, draws "hello" and a square */

u_char width = screenWidth, height = screenHeight;
u_char i,j;
clearScreen(COLOR_BLACK);

void Star(){
  i = 20;

  for (j = 10; j < 30; j++)
    drawPixel(i,j,COLOR_PINK);

  for (j = 10; j < 30; j++)
    drawPixel(j,i,COLOR_PINK);

  for (j = 10; j < 30; j++)
    drawPixel(j,j,COLOR_PINK);

  i = 30;

  for (j = 10; j < 30; j++)
    drawPixel(i--,j,COLOR_PINK);
} //end Star Method
