/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "buzzer.h"

/** Initializes everything, clears the screen, draws "hello" and a square */


u_char width = screenWidth, height = screenHeight;
u_char row, col, r, c;


/* The code is really ugly im sorry */
void starOfDavid(){
  u_char width = screenWidth, height = screenHeight;
  u_char row, col;

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

} //end Star Method

void Diamond(){
  //configureClocks();
  //lcd_init();

  for (r = 0; r <= 30; r++){
    for(c = 0; c <= 30-r; c++){
      drawPixel(50+r,50+c,COLOR_PINK);
      drawPixel(50+r,50-c,COLOR_PINK);
      drawPixel(50-r,50+c,COLOR_PINK);
      drawPixel(50-r,50-c,COLOR_PINK);
    }
  }
}//end diamond method

  void Joke(){
    static char state = 0;

    switch(state){
    case 0:
      buzzer_set_period(250);
      drawString5x7(10,30,"WHAT DID THE SUSHI",COLOR_HOT_PINK, COLOR_BLACK);
      drawString5x7(20,40,"TELL THE BEE?", COLOR_HOT_PINK, COLOR_BLACK);
      drawString8x12(35,60,"WASABI", COLOR_HOT_PINK, COLOR_BLACK);
      state = 1;      //change state to 1
      break;

    case 1:
      buzzer_set_period(250);
      drawString5x7(15,30,"HOW DO YOU MAKE ",COLOR_HOT_PINK, COLOR_BLACK);
      drawString5x7(25,40,"HOLY WATER?", COLOR_HOT_PINK, COLOR_BLACK);
      drawString8x12(10,60,"YOU BOIL THE", COLOR_HOT_PINK, COLOR_BLACK);
      drawString8x12(5,70,"HELL OUT OF IT", COLOR_HOT_PINK, COLOR_BLACK);
      state = 2;
      break;

    case 2:
      buzzer_set_period(250);
      drawString5x7(15,30,"WHAT DO YOU CALL",COLOR_HOT_PINK, COLOR_BLACK);
      drawString5x7(5,40,"SOMEONE WITH NO BODY", COLOR_HOT_PINK, COLOR_BLACK);
      drawString5x7(25,50,"AND NO NOSE?", COLOR_HOT_PINK, COLOR_BLACK);
      drawString8x12(15,60,"NOBODY KNOWS", COLOR_HOT_PINK, COLOR_BLACK);
      state = 3;
      break;

    case 3:
      buzzer_set_period(250);
      drawString5x7(2,30,"I MADE A PENCIL WITH",COLOR_HOT_PINK, COLOR_BLACK);
      drawString5x7(30,40,"TWO ERASERS!", COLOR_HOT_PINK, COLOR_BLACK);
      drawString8x12(1,60,"IT WAS POINTLESS.", COLOR_HOT_PINK, COLOR_BLACK);
      state = 0; //go back to state zero or interrupt somewhere
      break;
    }
  }//end joke method
