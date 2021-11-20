#include <stdio.h>
int main(){
	int n, i, m, k, x;
	int number[100];
	while(scanf("%d", &n)!=EOF && n!=0){
		for(i=0; i<n; i++){
			scanf("%d", &x);
			number[i]=x;
		}
		int m=number[0];
	    for(i=0; i<n; i++){
	    	if(m>number[i])
	    	    m=number[i];
		}  	
		for(i=0; i<n;i++){
			if(number[i]==m)
			break;
		}
		k=number[0];
		number[0]=number[i];
		number[i]=k;
		for(i=0; i<n; i++)
			printf("%d ", number[i]);
	}
	return 0;
}
