#include <stdio.h>
int main(){
	int M, N, i, j;  int s=0; int x=1;
	int number=3; 
	int a[10000]; a[0]=2;
	scanf("%d %d", &M, &N); 
    for(j=1 ;; number++){
    	for(i=2; i<=number/2; i++){
    		if(number%i==0)
    			s++;
		}
		if(s==0){
			a[j]=number;
			j++;
		}
		if(j==N)
			break;
		s=0;
	}
    for(j=M-1; j<N; j++){
    	if(x%10==0)
    	    printf("%d\n", a[j]);
    	else
    	    printf("%d ", a[j]);
    	x++;
	}
	return 0;
}
