#include <stdio.h>
int main(){
	int w, t, n, m, z, p;
	scanf("%d %d", &n, &m);
	w=n*m;
	while(m!=0){
		if(n<m){
			p=n;
			n=m;
			m=p;
		}
		t=n%m;
		n=m;
		m=t;
	}
	z=w/n;
	printf("%d", z);
	return 0;
}
