#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo (int a, int b){
	return a+b;
}

int square (int n){
	return n*n;
}

int get_max (int x, int y){
	if (x>y) return x;
	else return y ;
	}

int main(void) {
	int f,s;
	int sum;
	int squ;
	int result;
	int get;
	printf("Enter the integers:");
	scanf("%i %i",&f,&s);
	
	sum=sumTwo(f,s);
	squ=square(f);
	get=get_max(f,s);
	result=printf("Result-Sum:%i,Spuare:%i,Max:%i",sum,squ,get);

	return 0;
}
