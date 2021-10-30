#include <stdio.h>
int main (){
	int i, j, m;
	char u;
	scanf("%d %c", &i,&u);
	for(j=1; j<=i; j++){
		if(j==i)
		    printf("%c\n", u);
		else
		    printf("%c", u);
	}
	for(j=1; j<=i/2-2; j++){
        for(m=1; m<=i; m++){
        	if(m==1)
        	    printf("%c", u);
        	if(m!=1 && m!=i)
        	    printf(" ");
        	if(m==i)
        	    printf("%c\n", u);
		}
	}
	for(j=0; j<i; j++){
		printf("%c", u);
	}
	return 0;
}
