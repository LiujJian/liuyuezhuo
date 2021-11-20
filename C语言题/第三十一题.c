#include <stdio.h>
int main(){
	int T, i, A, B;
	scanf("%d", &T);
	int a[2][T];
	for(i=0; i<T; i++){
		scanf("%d %d", &A, &B);
		a[0][i]=A;
		a[1][i]=B;
	}
	for(i=0; i<T; i++){
		if(a[0][i]%a[1][i]==0)
		    printf("YES\n");
		else
		    printf("NO\n");
	}
	return 0;
}
