#include <stdio.h>
#include <algorithm>
#include <vector>
long long n,pos;
std::vector<long long>lol;
int main(){
    while(scanf("%lld", &n)!=EOF){
        lol.push_back(n);
        std::sort(lol.begin(),lol.end());
        pos=lol.size()-1;
        if(lol.size()%2!=0)printf("%lld\n", lol[pos/2]);
        else printf("%lld\n", (lol[pos/2]+lol[(pos/2)+1])/2);
    }
}
