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
  u_char row, col;
  clearScreen(COLOR_BLACK);

  /* fOLLOWING FOR LOOPS DO THE /\ SYMBOL OF THE STAR */
  for (row = 0, col = 60; row < 15 && col >= 50; row++, col--)
    drawPixel(col,row,COLOR_PINK);
  for(row = 0, col = 60; row < 15 && col < 70; row++, col++)
    drawPixel(col, row, COLOR_PINK);
  /* FOLLOWING FOR LOOPS TO DO THE \/ SYMBOL OPPOSITE*/
  for (row = 30, col = 50; row < 40 && col < 60; row++, col++)
    drawPixel(col, row, COLOR_PINK); 
  for (row = 30, col = 70; row < 40 && col >= 60; row++,col--)
    drawPixel(col, row, COLOR_PINK);
  
  /* DRAW LINE BELOW /_\ SHAPE */
  for (col = 35; col < 86; col++){
    drawPixel(col, 10, COLOR_PINK);
    drawPixel(col, 30, COLOR_PINK);
  }

  /* draw left \ symbol of star */
  for (row = 10, col = 35; row <= 20 && col <= 50; row++, col++)
    drawPixel(col, row, COLOR_PINK);
  /* draw left / symbol of star */
  for (row = 20, col = 45; row <= 30 && col >= 30; row++, col--)
    drawPixel(col, row, COLOR_PINK);
  
  /* draw right / symbol of star */
  for (row = 10, col = 86; row <= 20 && col >= 70; row++, col--)
    drawPixel(col, row, COLOR_PINK);
  /* draw right \ symbol of star*/
  for (row = 20, col = 76; row <= 30 && col <= 85; row++, col++)
    drawPixel(col, row, COLOR_PINK);

  /* draw last two lines... i know this is ugly im sorry */

}
