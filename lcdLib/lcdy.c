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
  
  clearScreen(COLOR_BLUE);
  
  u_char colLeft;
  u_char colRight;
  int i;
  int j;
  for(i = 15,j = 25; i < 60 && j >= 18; i++, j--){
    drawPixel(i,j,COLOR_RED);
  }
  for(i = 15, j = 25; i < 60 && j < 32; i++, j++){
    drawPixel(j,i,COLOR_BLACK);
  }
  
  
  //clearScreen(COLOR_BLUE);

  //drawString5x7(20,20, "hello", COLOR_GREEN, COLOR_RED);

  //fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
