#include <stdio.h>
#include <stdlib.h>

void main(void){
	int i=4; //modify to 300
	
	int *pi=&i;
	char *pc=&i;
	
	printf("%i,%i,%i\n",i,*pi,*pc);
}

/*
void main(void){
	int i=300; //modify to 300
	
	int *pi=&i;
	char *pc=&i;
	
	printf("%i,%i,%i\n",i,*pi,*pc);
}
*/
