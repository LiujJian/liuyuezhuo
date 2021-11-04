#include <stdio.h>
int R(int j);
int main(){
	int n; int x;
	int m=0; int i=0; int j=0;
	scanf("%d", &n);
	for(; n>=1;){
		i=n%10;
	    n/=10;
	    m+=i;
	}
	x=m;
	for(j=0; m>=1; j++){
		m/=10;
	}
	m=x;
	for(i=0; j>0; j--){
		i=m/R(j);
		m=m%R(j); 
			if(i==1) printf("yi ");
			if(i==2) printf("er ");
			if(i==3) printf("san ");
			if(i==4) printf("si ");
			if(i==5) printf("wu ");
			if(i==6) printf("liu ");
			if(i==7) printf("qi ");
			if(i==8) printf("ba ");
			if(i==9) printf("jiu ");
	        if(i==0) printf("ling "); 
	}
	return 0;
}
int R(int j){
	int ret=1;
	for(; j>1; j--){
		ret*=10;
	}
}
