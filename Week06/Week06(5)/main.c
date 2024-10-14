#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,c;
	char b;
	printf("Enter the calculation:");
	scanf(" %i %c %i",&a,&b,&c);
	
	if(b=='+')
	  printf("= %i\n",a+c);
	else if(b=='-')
	  printf("= %i\n",a-c);
	else if(b=='*')
	  printf("= %i\n",a*c);
	else if(b=='/')
	  printf("= %i\n",a/c);
	  	
	return 0;
}
