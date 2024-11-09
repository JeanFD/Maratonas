#include <bits/stdc++.h>
using namespace std;
int n, m, ans;

int dist[11][11];
int vet[11][11];

pair<int, int> mov[4] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};

bool verifica(int a, int b){
    return(a>0 and b>0 and a<=n and b<=m and dist[a][b]==0 and vet[a][b]!=2);
}

int bfs(int a, int b){
    dist[a][b]=1;
    queue<pair<int, int>> fila;
    fila.emplace(a, b);
    while(!fila.empty()){
        int x = fila.front().first, y = fila.front().second;
        fila.pop();
        // cout<<x<<" "<<y<<endl;
        if(vet[x][y]==0) return dist[x][y];
        for(auto i : mov){
            int nx = x+i.first, ny = y+i.second;
            if(verifica(nx, ny)){    
                dist[nx][ny]=dist[x][y]+1;
                fila.emplace(nx, ny);
            }
        }
    }
    return -1;
}

int main(){
    cin>>n>>m;
    int xi, yi;
    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++){
        cin>>vet[i][j];
        if(vet[i][j]==3) xi=i, yi=j;
    }

    cout<<bfs(xi, yi)-1<<endl;
    return 0;
}