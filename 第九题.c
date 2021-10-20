#include <stdio.h>
int main(){
	int A, B, C, b, D;
	scanf("%d/%d/%d", &A, &B, &C);
	switch(B){
		case 1:
		    b=0;
		    break;
		case 2:
			b=31;
			break;
		case 3:
			b=59;
			break;
		case 4:
			b=90;
			break;
		case 5:
			b=120;
			break;
		case 6:
			b=151;
			break;
		case 7:
			b=181;
			break;
		case 8:
			b=212;
			break;
		case 9:
			b=243;
			break;
		case 10:
			b=273;
			break;
		case 11:
			b=304;
			break;
		case 12:
			b=334;
			break;
	}
	D=b+C;   
    if(A%4==0 && B>=3)
    	D++;
    printf("%d", D);
	return 0;
}
