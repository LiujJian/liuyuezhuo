#include <stdio.h>
int main(){
	int T, i, j, m;
	int x=0;
	scanf("%d", &T);
	int number[3][T];
    for(i=0; i<T; i++){
    	scanf("%d %d %d", &number[0][i], &number[1][i], &number[2][i]);
	}
	for(i=0; i<T; i++){
		if(number[0][i] + number[1][i] > number[2][i]){
			printf("Case #%d: true\n", x+1);
		}else{
			printf("Case #%d: false\n", x+1);
		}
        x++;    
	}
	return 0;
}
