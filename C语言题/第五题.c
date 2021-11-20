#include <stdio.h>
int main(){
	int l;
	scanf("%d", &l);
	int number[l];
	int n=2,x=2,i=0,m=0;
	for(;n<=l;x=2){
	    for(;n<=l && i<=5;x++){
		    for(;n%x!=0 && x<=n;){
		    	number[1]=n;
		    	i++;
		    	n++;
			}
	    x++;
	    }
		printf("%d %d %d %d %d\n", number[i], number[i+1], number[i+2], number[i+3], number[i+3]);
    }
    return 0;
}
