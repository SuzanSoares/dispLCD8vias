/*
 * File:   newmain.c
 * Author: 21192688
 *
 * Created on 23 de Abril de 2021, 15:48
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "LCD_functions.h"

void main(void)
{
    int tela = 0;
    int n = 1;
    int n_1 = 0;
    int n_2 = 0;
    
    dispLCD_init();

    while( 1 )
    {
        switch( tela )
        {
            case 0: dispLCD(0,2," RELOU  ");
                    delay(2000);
                    dispLCD_clr();
                    tela = 1;
                    delay(1000);
                    break;
                    
            case 1: dispLCD(1,5,"  Suzan  ");
                    delay(2000);
                    dispLCD_clr();
                    tela = 2;
                    delay(2000);
                    break;
                    
            case 2:
                      tela = 3;
                      break;
//                    delay(500);
//                    break;
                    
            case 3: dispLCD(0,2,"Deboinhas?   "); 
                    delay(2000);
                    dispLCD_clr();
                    dispLCD(1,0,"           QBOM");
                    delay(4000);
                    dispLCD_clr();
                    tela = 4;
                    delay(2000);
                    break;
            
            case 4: tela = 0;
                    break;
                    
//            case 4: dispLCD(0,0,"dispLCD(l,c,str)"); 
//                    dispLCD(1,0,"l: linha        "); 
//                    tela = 5;
//                    delay(2000);
//                    break;
//                    
//            case 5: dispLCD(1,0,"c: coluna       "); 
//                    tela = 6;
//                    delay(1000);
//                    break;
//                    
//            case 6: dispLCD(1,0,"str: string     "); 
//                    tela = 10;
//                    delay(1500);
//                    break;
//                    
//            case 10:
//                    dispLCD(0,0,"  Display LCD   "); 
//                    dispLCD(1,0,"Fibonacci:      ");
//                    n_2 = n_1 = 0;
//                    n = 1;
//                    tela = 11;
//                    break;
//
//            case 11:
//                    n_2 = n_1;
//                    n_1 = n;
//                    n = n_1 + n_2;
//                    if( n < 0 )
//                        tela = 0;
//                    else
//                        tela = 12;
//                    break;
//
//            case 12:
//                    dispLCD_num(1,11, n, 5 ); 
//                    tela = 11;
//                    delay(1000);
//                    break;
        }
   }
    return;
}
