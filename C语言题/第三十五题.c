#include <stdio.h>
int main(){
	int a[100]; int n, i, j, m;
    double k, x;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &m);
		for(j=0; j<m; j++){
			scanf("%lf", &x);
			a[j]=x;
		}
		for(j=0; j<m; j++){
		    if(k<=a[j])
		        k=a[j];
	    }
		printf("%.2f\n", k);
	}
	return 0;
}
