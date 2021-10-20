#include <stdio.h>
int main(){
	int n, x;
	double sum;
	int i=0;
	scanf("%d", &n);
	int number[n];
	for(;i<n;i++){
		scanf("%d", &x);
		number[i]=x;
	}
	int m=number[0];
	int p=number[0];
	for(i=0;i<n;i++){
		if(m<number[i]){
			m=m;
		}else{
			m=number[i];
		}
	}
	for(i=0;i<n;i++){
		if(p<number[i]){
			p=number[i];
		}else{
			p=p;
		}
	}
	i=0;
	do{
		sum+=number[i];
		i++;
	}while(i<n);
	printf("%.2f\n", (sum-m-p)/(n-2));
	return 0;
}
