#include <stdio.h>
#include <math.h>
float aH,aM;
int h,m;
int main(){
    while(scanf("%d:%d",&h,&m),h){
        aH=h*30;
        aM=m*5.5;
        if(fabs(aH-aM)<=180) printf("%.3f\n",fabs(aH-aM));
        else printf("%.3f\n",aH>aM?360-aH+aM:360-aM+aH);
    }
}
