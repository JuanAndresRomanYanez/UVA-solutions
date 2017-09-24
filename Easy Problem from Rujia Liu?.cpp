#include <stdio.h>
#include <vector>
int n,m,x;
std::vector<std::vector<int> >lol;
int main(){
    while(scanf("%i%i", &n, &m)!=EOF){
        lol.assign(1000000,std::vector<int>());
        for(int i=1;i<=n;++i)scanf("%i", &x),lol[x].push_back(i);
        while(m--)scanf("%i%i", &n, &x),printf(n-1>=lol[x].size()?"0\n":"%i\n", lol[x][n-1]);
    }
}
