#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	int i;
	int Zn=0; int On=0; int Jn=0;
	while(a[0]!='E'){
		scanf("%s", a);
		i=strlen(a);
		for(; i>=0; i--){
			if(a[i]=='Z')
				Zn++;
			if(a[i]=='O')
				On++;
			if(a[i]=='J')
				Jn++;
		}
		while(Zn>0 || On>0 || Jn>0){
			if(Zn>0){
				printf("Z");
				Zn--;
			}
			if(On>0){
				printf("O");
				On--;
			}
			if(Jn>0){
				printf("J");
				Jn--;
			}
		}
	}
	return 0;
}

