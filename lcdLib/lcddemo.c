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

  drawString5x7(10,50, "WHAT DID THE SUSHI", COLOR_PINK, COLOR_BLUE);
  drawString5x7(25,60, "TELL THE BEE?", COLOR_PINK, COLOR_BLUE);
  drawString8x12(40,75,"WASABI", COLOR_WHITE, COLOR_BLACK);
  // fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}// end main
