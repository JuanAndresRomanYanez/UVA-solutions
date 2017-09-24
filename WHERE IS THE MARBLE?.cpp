#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int a,b,x,conti=0;
    while(cin>>a>>b && a!=0 && b!=0){
        conti++;
        vector<int>v(a);
        for(int i=0;i<a;++i){
        cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<"CASE# "<<conti<<":\n";
        for(int j=0;j<b;++j){
            cin>>x;
            for(int lol=0;lol<a;++lol){
                if(v[lol]==x){cout<<x<<" found at "<<lol+1<<"\n";goto kok;}
            }
            cout<<x<<" not found\n";
            kok:;
        }
    }
    return 0;
}
