#include <iostream>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a;
int main(){
    optimizar_io
    while((cin>>a) && (a!="#"))cout<<(next_permutation(a.begin(),a.end())?a:"No Successor")<<"\n";
}
