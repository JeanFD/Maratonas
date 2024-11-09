#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5*1e4+1;
bool vis[MAXN];
vector<int> g[MAXN];

void adiciona_aresta(int a, int b){
    g[a].push_back(b);
    g[b].push_back(a);
    return;
}

void dfs(int a){
    vis[a]=true;
    for(int i=0; i<(int)g[a].size(); i++){
        if(!vis[g[a][i]]) dfs(g[a][i]);
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    int x, y;
    for(int i=0; i<m; i++){
        cin>>x>>y;
        adiciona_aresta(x, y);
    }

    int ans=0;
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            ans++;
            dfs(i);
        }
    }

    cout<<ans<<endl;
    return 0;
}