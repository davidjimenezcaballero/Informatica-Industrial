#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


//programa que lea la cadena David_52419 y extraiga el numero de matrivula usando strtol y isdigit

// funcion que les ka cadena
int leer_numero(char* cadena);

int leer_numero(char* cadena)
{
	int i=0; int numero=0;
	//for(;cadena[i]!='\0';i++) { esto sin punteros
	//con punteros
	char* pChr=cadena;
	
	for(;*pChr!='\0';pChr++){
	
		if (isdigit(*pChr) )
			//extraigo numero
		numero=	strtol(pChr,NULL , 10);  // 10 es el radix y el end (NULL) es un puntero  puntero porque es un paso por referencia, 
	//necesitas modificar esa direcccion del puntero y eso se hace con paso por referencai
		
	}
return numero;		
}


int main(int argc, char *argv[])
{	

	char* cadena="david_52419";
	int num=0;
	
	num=leer_numero(cadena);
	printf("%d",num);
	
	return 0;
	
}


//ver por que no me detecta 52419 y slo 9
