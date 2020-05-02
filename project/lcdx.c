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


void Star(){

  configureClocks();
  lcd_init();

  clearScreen(COLOR_BLACK);  

  i = 20;

  for (j = 10; j < 30; j++){
    drawPixel(i,j,COLOR_PINK);
    drawPixel(j,i,COLOR_PINK);
    drawPixel(j,j,COLOR_PINK);
  }

  i = 30;

  for (j = 10; j < 30; j++)
    drawPixel(i--,j,COLOR_PINK);
} //end Star Method
