#include <stdio.h>
int F(int i);
int main(){
    int m, n, j;
    double S, i;
    scanf("%d", &m);
    for(j=1; j<=m; j++){
    	S=0;
    	scanf("%d", &n);
	    for(i=1; i<=n; i++){
      	    S += F(i)*1/i;
	    }
	    printf("%.2f\n", S);
    }
	return 0;
}
int F(int i){
	int ret=-1;
    if(i%2==1)
        ret=1;
    else
        ret=-1;
	return ret;
}
