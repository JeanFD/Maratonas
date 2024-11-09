#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int c, n; cin>>c>>n;
    map<int, pair<bool, int>> r;

    int p, v;
    rep(i, 0, c) {
        cin>>p>>v; 
        r[p]=make_pair(false, v);
    }
    rep(i, 0, n) {
        cin>>p>>v;
        if(v>r[p].second){
            r[p].first = true;
            r[p].second = v;
        }
    }

    for(auto i : r) if(i.second.first) cout<<i.first<<" "<<i.second.second<<endl;
    return 0;
}