#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long val,test,per;
string x;
int main(){
    optimizar_io
    cin>>test;
    while(1){
            map<string,long long>lol;
            vector<string>pop(test);
            for(int i=0;i<test;i++){
                    cin>>x;
                    pop[i]=x;
            }
            for(int i=0;i<test;++i){
                cin>>x>>val>>per;
                if(per!=0)lol[x]-=((val/per)*per);
                for(int j=0;j<per;++j){
                    cin>>x;
                    lol[x]+=(val/per);
                }
            }
            for(int i=0;i<test;++i)cout<<pop[i]<<" "<<lol[pop[i]]<<"\n";
            if(cin>>test)cout<<"\n";
            else break;
    }
    return 0;
}
