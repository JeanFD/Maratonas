#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;

int main(){ _
    int n, m, q;
    cin>>n>>m>>q;

    set<int> sy;
    set<int> sx;
    int op, x, y;
    bool resp;
    while(q--){
        cin>>op;
        if(op==1){
            cin>>x>>y;
            sy.insert(y);
            sx.insert(x);
        }else{
            resp=true;
            cin>>x>>y;
            if(sx.count(x)==0&&sy.count(y)==0)resp=false;
            cin>>x>>y;
            if(sx.count(x)==0&&sy.count(y)==0)resp=false;
            if(resp) cout<<"SIM"<<endl;
            else cout<<"NAO"<<endl;
        }
    }

    return 0;
}