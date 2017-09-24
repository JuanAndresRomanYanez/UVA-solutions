#include <iostream>
#define optimizat_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long func(long long n){
    long long x=0;
    while(n!=0){
            x+=(n%10);
            n/=10;
    }
    if(x>=10){func(x);}
    else {return x;}
}
int main()
{
    optimizat_io
    long long a;
    while(cin>>a && a!=0){
        cout<<func(a)<<"\n";
    }
    return 0;
}
