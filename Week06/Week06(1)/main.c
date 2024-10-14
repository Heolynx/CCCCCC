#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int v;
	printf("Enter an integer:");
	scanf("%i",&v);
	
	if(v>0)
	  printf("This is positive number.");
	else if (v==0)
	  printf("This is 0.");
	else if (v<0)
	  printf("This is negative number.");
	return 0;
}
