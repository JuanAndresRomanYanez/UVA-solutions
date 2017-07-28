#include <stdio.h>
int main(){
    long long a,x;
    scanf("%lld", &a);
    while(a--){
            scanf("%lld", &x);
            printf("%lld\n", x*(x+2));
    }
}
