#include <stdio.h>
#include <stdlib.h>
#include "string.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])

{	char str[]="hola mundo creeeeeel";
	char* pChr;
	
	
	//find 'c'
	pChr= strchr(str, 'c');
	
	// escribir 'cruel' empezando por la posicion en que estaba 'c'
	
	strcpy(pChr, "cruel");
	//pChr + strlen("cruel"); //puntero apuntando al primer caracter y le sumo cinco que cupa cruel y donde apunta el punter escribo el final de carrera, ahora escrubunos el final de carrera
	//*(pChr + strlen("cruel"))='\0'; no haria falta
	puts(str);
	
	return 0;
}
