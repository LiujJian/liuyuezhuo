#include <stdio.h>
int main(){
	int i, j, x, n, m;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &x);
			a[i][j]=x;
		}
	}
	double sum=0;
	double ave;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			sum+=a[i][j];
		}
		ave=sum/m;
		if(i==n-1)
		    printf("%.2f\n", ave);
		else
		    printf("%.2f ", ave);
		sum=0;
	}
	float b[m];
	sum=0; ave=0;
	for(j=0; j<m; j++){
		for(i=0; i<n; i++){
			sum+=a[i][j];
		}
		ave=sum/n;
		if(j==m-1)
		    printf("%.2f\n", ave);
		else
		    printf("%.2f ", ave);
		b[j]=ave;
		sum=0;
	}
	int s=0;  int f=0;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(a[i][j]<b[j])
			    s++;
		}
		if(s==0)
		    f++;
		s=0;
	}
	printf("%d", f);
	return 0;
}
