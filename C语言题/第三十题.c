#include <stdio.h>
int F(int i);
int G(int s, int DA);
int main(){
	int A, DA, B, DB;
	scanf("%d %d %d %d", &A, &DA, &B, &DB);
	int i, j, m, n;
	m=A; n=B;
	for(i=0; A>=1 ;i++){
		A/=10;
	}
	int a[i];
	for(j=0 ;i>0 ;i--){
		a[j]=m/F(i);
		m=m%F(i);
		j++;
	}            
	int s=0;
	for(i=0; i<j+1; i++){
		if(a[i]==DA)
		   s++; 
	}
	int PA=G(s, DA);
	
	for(i=0; B>=1 ;i++){
		B/=10;
	}
	int b[i];
	for(j=0 ;i>0 ;i--){
		b[j]=n/F(i);
		n=n%F(i);
		j++;
	}
	s=0;
	for(i=0; i<j+1; i++){
		if(b[i]==DB)
		   s++; 
	}
	int PB=G(s, DB);  

	printf("%d", PA+PB);
	return 0;
}
int F(int i){
	int ret=1;
	for(; i>1; i--){
		ret*=10;
	}
	return ret;
}
int G(int s, int DA){
	int r;
	int num=0;
	int numx=1;
	if(s!=0){
		for(; s>0; s--){
			num+=F(s)*DA;
		}
	}else{
		num=0;
	}
	return num;
}
