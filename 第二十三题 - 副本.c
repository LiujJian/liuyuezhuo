#include <stdio.h>
int main(){
	int N, M, i, s;
	int a=0; int b=0; int c=0; int d=0; int e=0; int f=0; int g=0; int h=0; int j=0; int k=0;
	scanf("%d", &N);
	M=N;
	for(i=0; N>=1; i++){
		N/=10;
	}
	N=M;
	for(; i>=1; i--){
		s= N%10;
		N/=10;
	    if(s==0) a++;
	    if(s==1) b++;
	    if(s==2) c++;
		if(s==3) d++;
		if(s==4) e++;
		if(s==5) f++;
		if(s==6) g++;
		if(s==7) h++;
		if(s==8) j++;
		if(s==9) k++;
    }
	if(a!=0) printf("0:%d\n", a);
	if(b!=0) printf("1:%d\n", b);
	if(c!=0) printf("2:%d\n", c);
	if(d!=0) printf("3:%d\n", d);
	if(e!=0) printf("4:%d\n", e);
	if(f!=0) printf("5:%d\n", f);
	if(g!=0) printf("6:%d\n", g);
	if(h!=0) printf("7:%d\n", h);
	if(j!=0) printf("8:%d\n", j);
	if(k!=0) printf("9:%d\n", k);
	
	return 0;
}

