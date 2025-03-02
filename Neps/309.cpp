#include <bits/stdc++.h>
using namespace std;

int grafo[1001][1001];
int visitados[1001];
int n, m;

void bfs(int x){
    queue<int> q;
    visitados[x] = 1;
    q.push(x);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=1; i<=n; i++){
            if(grafo[u][i] && !visitados[i]){
                visitados[i] = 1;
                q.push(i);
            }
        }
    }
}

int main(){
    cin>>n>>m;
    int a, b;
    for(int i=0; i<m; i++){
        cin>>a>>b;
        grafo[a][b] = 1;
        grafo[b][a] = 1;
    }

    int ans = 0;

    for(int i=1; i<=n; i++){
        if(!visitados[i]){
            ans++;
            bfs(i);
        }
    }

    cout<<ans<<endl;

    return 0;
}