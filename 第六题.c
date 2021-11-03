#include <stdio.h>
int main(){
	int n, m, x, i, k;
    for(;;){
    	scanf("%d", &n);
    	m=n;
    	int a[n];
    	if(n==0)
    	    break;
    	for(i=0; i<n; i++){
    	    scanf("%d", &x);
			a[i]=x;	
		}
		for(;n>=1; n--){
		    for(i=0; i+1<n; i++){
			    if(a[i]<=0 && a[i+1]<=0 && a[i]>a[i+1]){
				    k=a[i];
				    a[i]=a[i+1];
				    a[i+1]=k;
			    }
			    if(a[i]<=0 && a[i+1]>=0 && 0-a[i]<a[i+1]){
				    k=a[i];
				    a[i]=a[i+1];
				    a[i+1]=k; 
			    }
			    if(a[i]>=0 && a[i+1]<=0 && a[i]<0-a[i+1]){
				    k=a[i];
				    a[i]=a[i+1];
				    a[i+1]=k;
			    }
			    if(a[i]>=0 && a[i+1]>=0 && a[i]<a[i+1]){
				    k=a[i];
				    a[i]=a[i+1];
				    a[i+1]=k;
			    }
		    }
	    }
	    for(i=0; i<m; i++){
	    	printf("%d ", a[i]);
		}
    }
    return 0;
}
