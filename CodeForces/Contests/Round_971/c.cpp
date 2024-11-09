#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("meuout.txt", "w", stdout);
    int t; 
    int x, y, k;
    int ans;
    cin>>t;

    while(t--){
        cin>>x>>y>>k;
        ans = max((ceil(x/(double)k)*2)-1, (ceil(y/(double)k))*2);
        cout<<ans<<endl;
    }
    return 0;
}