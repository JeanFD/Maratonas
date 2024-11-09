#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int a, b; cin>>a>>b;
    set<int> sa; set<int>sb;
    int aux;

    rep(i,0,a){
        cin>>aux;
        sa.insert(aux);
    }

    rep(i,0,b){
        cin>>aux;
        sb.insert(aux);
    }
    int ans1=0, ans2=0;
    for(auto i : sa) if(sb.count(i)==0) ans1++;
    for(auto i : sb) if(sa.count(i)==0) ans2++;
    cout<<min(ans1, ans2)<<endl;
    return 0;
}