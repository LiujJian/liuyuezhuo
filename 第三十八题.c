#include <stdio.h>
int main (){
	int N, M, i, j, x; int score=0;
	scanf("%d %d", &N, &M);
	int a[N][M]; int b[M]; int c[M];
	for(i=0; i<M; i++){
		scanf("%d", &x);
		b[i]=x;
	}
	for(i=0; i<M; i++){
		scanf("%d", &x);
		c[i]=x;
	} 
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			scanf("%d", &x);
			a[i][j]=x;
		}
	}
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			if(a[i][j]==c[j])
			    score+=b[j];
		}
		printf("%d\n", score);
		score=0;
	}
	return 0;
}
