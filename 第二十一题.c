#include <stdio.h>
int R(int i, int n);
int main(){
	int n, S;
	int i=1; 
	while(scanf("%d", &n)!=EOF && n!=0){
		if(n<=3){
			printf("2\n");
		}else{
			S=R(i, n)+2;
			printf("%d", S);
		}
	}
	return 0;
}
int R(int i, int n){
	int ret=1;
	for(i=1; i<=n-2; i++){
		ret*=2;
	}
	return ret;
}
