#include <stdio.h>
int main (){
	int n, x;  int M=0;  int s=0;
	scanf("%d", &n);
	int a[n]; int i=0;
	for(i=0;; i++){
		scanf("%d", &x);
		if(x==0)
		    break;
		a[i]=x;
	}
	for(i=0; i<n; i++){
		M+=a[i]/100;
		s=a[i]%100;
		
		M+=s/50;
		s=s%50;
		
		M+=s/20;
		s=s%20;
		
		M+=s/10;
		s=s%10;
		
		M+=s/5;
		s=s%5;
		
		M+=s/2;
		s=s%2;
		
		M+=s;
	}
	printf("%d", M);
	return 0;
}
