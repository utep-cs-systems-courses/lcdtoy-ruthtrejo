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
  u_char i,j;
  clearScreen(COLOR_BLUE);

  i = 20;
 
  for (j=10; j<30; j++)
    drawPixel(i, j, COLOR_BLACK);

  for (j=10; j<30; j++)
    drawPixel(j, i, COLOR_BLACK);

  for (j=10; j<30; j++)
    drawPixel(j, j, COLOR_BLACK);

  i = 30;

  for (j=10; j<30; j++)
    drawPixel(i--, j, COLOR_BLACK);
  // for(j = 0; j < 32; j++){
  // drawPixel(0,j,COLOR_BLACK);
  //}
  // for(j = 0; j < 30; j++){
  // drawPixel(j,j,COLOR_BLACK);
  //}
  //for(j = 30; j >= 0; j--){
  // drawPixel(j,0,COLOR_BLACK);
  //}
  
  //clearScreen(COLOR_BLUE);

  //drawString5x7(20,20, "hello", COLOR_GREEN, COLOR_RED);

  //fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
