/*
 * File:   delay.c
 * Author: 21192688
 *
 * Created on 23 de Abril de 2021, 16:04
 */


#include <xc.h>
#include "config.h"

#define _XTAL_FREQ 4000000

void delay (int t)
{
    while(t)
    {
        __delay_ms(1);
        --t;
    }
}