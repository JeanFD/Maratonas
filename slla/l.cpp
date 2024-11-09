#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;
int n, m;

int main(){ _
    cin>>n>>m;//qtd mango, qtd de pares;
    map<int, set<int>> ng;

    int u, v;
    for(int i=0; i<m; i++){
        cin>>u>>v;
        ng[u].insert(v);
        ng[v].insert(u);
    }

    set<int> ans1;
    set<int> ans2;
    
    ans1.insert(1);
    for(int i=2; i<n; i++){
        bool p=true, s=true;
        for(auto j:ng[i]) if(ans1.count(j)!=0) p=false;
        if(p)
          for(auto j:ng[i]) if(ans1.count(j)!=0)
    }

    return 0;
}