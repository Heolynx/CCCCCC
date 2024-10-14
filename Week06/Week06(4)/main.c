#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum;
	int k;
	int i;
	
	sum==0;
	printf("Enter a number:");
	scanf("%i",&k);
	
	for(i=1;i<=k;i++)
	{
		sum +=i;
	}
	
	printf("The result is %i",sum);
	return 0;
}
