#include <stdio.h>
int main(){
	int N, i, j, a, b, c, d;
	int jia=0; int yi=0;
	scanf("%d", &N);
	int m[4][N];
	for(i=0; i<N; i++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		m[0][i]=a; m[1][i]=b; m[2][i]=c; m[3][i]=d;
	}
	for(i=0; i<N; i++){
		if(m[1][i]==m[0][i]+m[2][i] && m[3][i]!=m[0][i]+m[2][i])
		    yi++;
		if(m[1][i]!=m[0][i]+m[2][i] && m[3][i]==m[0][i]+m[2][i])
		    jia++;
	}
	printf("%d %d", jia ,yi);
	return 0;
}
