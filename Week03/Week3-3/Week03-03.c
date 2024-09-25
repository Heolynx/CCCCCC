#include <stdio.h>

int main(void)
{
	char a;
	
	printf("enter a character:");
	scanf("%c", &a);
	
	printf("The next character of %c(%d) is %c(%d)",a,a,a+1,a+1);
	
	return 0;
}

 
