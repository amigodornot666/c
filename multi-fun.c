/* example where i add multiple functions and call them from main */
/* multi-fun.c 																										*/
#include <stdio.h>

void SayHello( void );
void SayFuck( void );
void SayAsshole( void );

int main(void) {
				SayHello();
				SayFuck();
				SayAsshole();
				return 0;
}

void SayHello(void) {
				printf("Howdy shitty shitty World!!\n");
}

void SayFuck(void) {
				printf("Goddamn Fuck Shit Bitch!!\n");
}

void SayAsshole(void) {
				printf("Stupid Fucking ASS FUCK@!!!\n");
}






