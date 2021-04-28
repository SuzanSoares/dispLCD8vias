#ifndef LCD_FUNCTIONS_H
#define LCD_FUNCTIONS_H

void dispLCD_instReg( unsigned char i );
// Escreve um dado no display (Data Register))

void dispLCD_dataReg( unsigned char d );
// Posicionar o cursor na coordenada: linha e coluna 

void dispLCD_lincol( unsigned char lin, unsigned char col);
// Inicializa os pinos conectados ao display

void dispLCD_init( void );
// Escreve uma string no display

void dispLCD( unsigned char lin, unsigned char col, const char * str );
// Escreve um número inteiro no display

void dispLCD_num(  unsigned char lin, unsigned char col, int num, unsigned char tam );
// Apaga todos os caracteres no display

void dispLCD_clr( void );


#endif
