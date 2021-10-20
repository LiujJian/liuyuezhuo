#include <stdio.h>
int main(){
	int n,x;
	int i=0, ia=0, ib=0;
	scanf("%d", &n);
	int numberA[ia], numberB[ib];
	for(;i<n;i++){
		scanf("%d", &x);
		if(x<0){
			numberA[ia]=x;
			ia++;
		}else{
			numberB[ib]=x;
		}
	}
	
} 
