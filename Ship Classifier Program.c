/* ---- Statement of problem and brief description of algorithm to solve the problem ---- */
    /* Statement of input(s)*/
    /* Statement of output(s)*/

/* Problem Statement: This program calculates the circumference and area of a circle */
/* Author: Ian Langelett */
/* Created Date: 1/25/2025 */
/* Revised by: Ian Langelett */
/* Revision Date: 1/25/2024 */



/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */

    /* ---- Constant macro definitions ---- PI 3.14159*/


/* ---- Function prototype definitions ---- */
     /*returndatatype functionname (argumentdatatype argumentname);*/

/* ---- Declare Global variables ---- */

/* ---- Main Function ---- */
int
main(void)
{
char class; /*input - character indicating class of ship*/

/* Read first character of serial number*/

 printf("Enter ship serial number> ");
 scanf("%c", &class);

 /*Display */
 /* Display first character followed by ship class */

 printf("Ship class is %c: ", class);
 switch (class) {
 case 'B':
 case 'b':
 printf("Battleship/n");
 break;
 case 'C':
 case 'c':
 printf("Cruiser/n");
 break;
 case 'D':
 case 'd':
 printf("Destroyer/n");
 break;
 case 'F':
 case 'f':
 printf("Frigate/n");
 break;
 default:
 printf("Unknown/n");
 }


return(0);
}
/* ---- Function subprograms ---- */

    /* Description of subprogram actions */
