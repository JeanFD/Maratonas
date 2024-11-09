#include <bits/stdc++.h>
using namespace std;
#define d(x) cout<<#x<<": "<<x<<endl;

int n;
int vet[101][101], vis[101][101];

int movx[4] = {0, 1, 0, -1};
int movy[4] = {-1, 0, 1, 0};

bool verifica(int a, int b){
    return(a>0 and b>0 and a<=n and b<=n and vis[a][b]==0);
}

int dfs(int a, int b){
    int qtd = 0;
    vis[a][b]=1;
    for(int i=0; i<4; i++){
        int nx = a+movx[i], ny = b+movy[i];
        if(verifica(nx, ny)) {
            if(vet[nx][ny]>=vet[a][b]) {
                // cout<<nx<<" "<<ny<<endl;
                qtd+=dfs(nx, ny);
            }
        }
    }
    return qtd+1;
}

int main(){
    int x, y;
    
    cin>>n;
    cin>>x>>y;

    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++)
        cin>>vet[i][j];

    cout<<dfs(x, y)<<endl;
    return 0;
}