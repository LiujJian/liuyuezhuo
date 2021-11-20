#include <stdio.h>
int main(){
	int a;
	int b;
	int n=0;
	int m=0;
	scanf("%d %d", &a, &b);
	if(a<0 || a>100){
		n = 0;
	}
	if(a>=0 && a<60){
		n++;
	}
	if(a>=60 && a<=100){
		n = n+3;
	}
	if(b<0 || b>100){
		m = 0;
	}
	if(b>=0 && b<60){
		m++;
	}
	if(b>=60 && b<=100){
		m = m+3;
	}
	switch (n+m){
		case 0:
			printf("it is error.");
			break;
		case 1:
			printf("it is error.");
			break;
		case 2:
			printf("it is not pass.");
			break;
		case 3:
			printf("it is error.");
			break;
		case 4:
			printf("it is not pass.");
			break;
		case 6:
			printf("it is pass");
	}
	return 0;
}
