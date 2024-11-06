#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
	int i;
    int a[SIZE]={1,2,3,4,5};
    int b[SIZE]={1,2,3,7,10};
    int flag_same=1;

    for(i=0;i<SIZE;i++)
    {
    	if(a[i]!=b[i]){
    		printf("They are different:%d (a[%d]=%d, b[%d]=%d)\n",i,i,a[i],i,b[i]);
    		flag_same=0;
		}
	else if(a[i]==b[i]){
		printf("They are same each other.\n");
		flag_same=0;
	}
		
	}

	return 0;
}
