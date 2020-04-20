/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;
  u_char j;
  u_char i;
  
  clearScreen(COLOR_BLUE);
  for (int i = 1; i <= (30 * 2 - 1); i++){
    if(i == 30){
      for (j = 1; j <= (30 * 2 - 1); j++){
	drawPixel(j,j,COLOR_BLACK);
      }
    }
    else{
      for(j = 1; j <= (30-1); j++){
	drawPixel(j,j,COLOR_BLUE);
      }
      drawPixel(i,i,COLOR_BLACK);
    }
    //idk how to draw a new line so it goes next?
  }
  
  //clearScreen(COLOR_BLUE);

  //drawString5x7(20,20, "hello", COLOR_GREEN, COLOR_RED);

  //fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
