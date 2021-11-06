#include <stdio.h>
int main(){
	char a, b;
	int N, i;
	int dra=0; int win=0; int fai=0;
	int Cn=0; int Jn=0; int Bn=0;
	int Cf=0; int Jf=0; int Bf=0;
	scanf("%d", &N);
	for(i=0; i<N; i++){
 		scanf(" %c %c", &a, &b);
		if(a=='C' && b=='C')
			dra++;
		if(a=='J' && b=='J')
			dra++;  
		if(a=='B' && b=='B')
			dra++;
		if(a=='C' && b=='J'){
			win++;  Cn++;
		}
		if(a=='C' && b=='B')
			fai++;  Cf++;
		if(a=='B' && b=='C'){
			win++;  Bn++;
		}
		if(a=='B' && b=='J')
			fai++;	Bf++;
		if(a=='J' && b=='C')
			fai++;	Jf++;
		if(a=='J' && b=='B'){
			win++;  Jn++;
		}
	}
	printf("%d %d %d\n", win, dra, fai);
	printf("%d %d %d\n", fai, dra, win);
	if(Cn==Bn || Cn==Jn){
		if(Cn>=Bn && Cn>=Jn){
			printf("B");
		}
	}
	if(Bn==Cn || Bn==Jn){
		if(Bn>=Cn && Bn>=Jn){
			printf("B ");
		}
	}
	if(Cn>Bn && Cn>Jn)
		printf("C ");
	if(Bn>Cn && Bn>Jn)
		printf("B ");
	if(Jn>Cn && Jn>Bn)
		printf("J ");
		
	
	if(Cf==Bf || Cf==Jf){
		if(Cf>=Bf && Cf>=Jf){
			printf("B ");
		}
	}
	if(Cf>Bf && Cf>Jf)
		printf("C");
	if(Bf>Cf && Bf>Jf)
		printf("B");
	if(Jf>Cf && Jf>Bf)
		printf("J");
	return 0;
}
