#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	scanf("%d%d%d", &a, &b, &c);
    if(a==b && a==c){
    	printf("1");
	}
	if(a+b>c && a+c>b && b+c>a && a==b && a!=c){
		printf("2");
	}
	if(a+b>c && a+c>b && b+c>a && a!=b && a!=c &&b!=c){
		printf("3");
	}
	if(a+b<c || a+c<b || b+c<a){
		printf("0");
	}
	return 0;
}
