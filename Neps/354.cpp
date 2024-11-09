#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5;
const int INF = 0x3f3f3f3f;
vector<int> g[MAXN+1];
bool ans=true;

int dfs(int a){
    int qtdFilhos=0, balance=0, aux;
    bool prim = true;
    for(auto i:g[a]){
        if(prim) qtdFilhos = balance = dfs(i), prim=false;
        else{
            aux = dfs(i);
            if(balance!=aux) ans=false;
            qtdFilhos+=aux;
       }

    }
    return qtdFilhos+1;
}

int main(){
    int n; 
    cin>>n;
    
    int u, v;

    while(n--){
        cin>>u>>v;
        g[v].push_back(u);
    }

    dfs(0);
    if(ans) cout<<"bem\n";
    else cout<<"mal\n";
    return 0;
}