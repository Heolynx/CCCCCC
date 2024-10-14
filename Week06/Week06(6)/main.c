#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=50;
	int e;
	int t;
	t=0;
	
	do{
	    printf("Guess a number:");
    	scanf("%i",&e);
		t++;
		
		if (e<answer){
			printf("Low!\n");
		} else if (e>answer){
			printf("High!\n");
		} else{
			printf("congratulation! Trials:%i",t);
		}
	  } while (e!=answer);
	
	return 0;
}
