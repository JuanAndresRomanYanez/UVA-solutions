#include <stdio.h>
int H,D,F,dia;
float U,alt,f;
int main(){
	while(scanf("%d %f %d %d", &H, &U, &D, &F),H){
		dia=1;
		alt=0;
		f=U*F/100;
		while(1){
			alt+=U;
			if(U>0)U-=f;
			if(alt>H)break;
			alt-=D;
			if(alt<0) break;
			dia++;
		}
		if(alt<0)printf("failure on day %d\n", dia);
		else printf("success on day %d\n", dia);
	}
}
