#include <stdio.h>
int main(){
	int n, m, i, j, x, k;
	int number[100000];
	while(scanf("%d %d", &n, &m)!=EOF && n!=0 && m!=0){
		for(i=0; i<n; i++){
			scanf("%d", &x);
			number[i]=x;
		}
		for(i=0; i<n; i++){
			for(j=i+1; j<n ;j++){
				if(number[i]<number[j]){
					k=number[i];
					number[i]=number[j];
					number[j]=k;
				}
			}
		//	printf("%d ", number[i]);
		}
		if(m>n){
			for(i=0; i<n; i++){
				if(i!=0)
				    printf(" ");
				    printf(" %d ", number[i]);
			}
		}else{
			for(i=0; i<m; i++){
				if(i!=0)
				    printf(" ");
				    printf("%d", number[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
