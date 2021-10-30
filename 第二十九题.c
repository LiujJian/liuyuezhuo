#include <stdio.h>
int main(){
	int N, i, j, x;
	int m=0;
	scanf("%d", &N);
	int a[N]; int b[N*(N-1)];
	for(i=0; i<N; i++){
		scanf("%d", &x);
		a[i]=x;
	}
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
		    if(i!=j){
			    b[m]=a[i]*10 + a[j];
			    m++;
			}
		}
	}
	m=0;
	for(i=0; i<N*(N-1); i++){
		m+=b[i];
	}
	printf("%d", m);
	return 0;
}
