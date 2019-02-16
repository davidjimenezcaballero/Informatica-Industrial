#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//fomratear la caden de caracteres
//cadena: "los alumnos del a309 son 50" 

int main(int argc, char *argv[])

{	int num=50;
	char str[100];
	
	
	sprintf(str, "los alumnos del a309 son %d",num);
	puts(str);
	
	return 0;
}
