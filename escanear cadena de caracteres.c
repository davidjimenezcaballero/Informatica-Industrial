#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//cojo por teclado una informacion  "los alumnos son cnum" y extraigo el numero dentro de esa cadena

//algo que paso para que me lo rellene, la propia frase
char* leer_frase(char* dest);
char* leer_frase(char* dest)
{	//leer flujo stdin

	printf("Introduzca una frase: \n"); 
	//gets(dest);  es valido 
	scanf("%[^\n]",dest); //lee todo lo que no sea (^) el simbolo |n  // si pones un * se lo va a saltsr lo qu pongas
	puts (dest);
	return dest; // es un mero adorno 
}
//ahora habra que extraer el numero, que ya es algo constante
int extraer_numero (const char* dest);
int extraer_numero (const char* dest)
{	


char token[50];
int num=0;
	//para sacar la cadena de la memoria, la dest, vamos a extraer lo que queramos con el sscanf pasandoole la caddena 
	
	
	sscanf(dest,"%*[^0123456789]%d", &num); //uasi leeria todo lo que no sean numeros , si hubiese un a309 ya habria problemas
	//sscanf(dest,"%s%s%s%d",token,token,token,&num); //sabemos  de antemano que habra tres palabras  los alumnos y son  
	return num;
	
	
}





int main(int argc, char *argv[]) 
{	
	int num=0;
	char str[250];
	leer_frase(str);
	num= extraer_numero(str);
	printf("%d",num);
		
	return 0;
}
