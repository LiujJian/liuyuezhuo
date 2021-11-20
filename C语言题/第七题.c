#include <stdio.h>
int main(){
	int n,x;
	int i=0;
	int number[n];
	scanf("%d", &n);
	for(;i<n;i++){
		scanf("%d", &x);
		number[i]=x;
	}
	int ia=0, T=1;
	do{
		if(number[ia]%2==1){
			T*=number[ia];
			ia++;
		}else{
			ia++;
		}
	}while(ia<=n);
	printf("%d", T);
	return 0;
} 
