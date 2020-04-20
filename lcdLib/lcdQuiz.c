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
  u_char j,i;
  clearScreen(COLOR_BLUE);

  for(j = 0, i=0;j < 30 && i < 30;j++,i++){
    drawPixel(j,j,COLOR_BLACK);
    drawPixel(0,j,COLOR_BLACK);
    drawPixel(i,30,COLOR_BLACK);
  } 
  
  // for(j = 0; j < 30; j++){
  //drawPixel(j,j,COLOR_BLACK);
  //}
  // for(j = 0; j < 30; j++){
  // drawPixel(0,j,COLOR_BLACK);
  //}
  // for(i = 0; i < 30; i++){
  // drawPixel(i,30,COLOR_BLACK);
  // }
  
  //clearScreen(COLOR_BLUE);

  //drawString5x7(20,20, "hello", COLOR_GREEN, COLOR_RED);

  //fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
