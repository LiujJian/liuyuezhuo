#include <stdio.h>
int main (){
	int number, i;
	scanf("%d", &number);
	int b=number/100;
	int s1=number%100;
	int s=s1/10;
	int n=s1%10;
	for(i=0; i<b; i++){
		printf("B");
	} 
	for(i=0; i<s; i++){
		printf("S");
	}
	for(i=1; i<=n; i++){
		printf("%d", i);
	}
	return 0;
}
