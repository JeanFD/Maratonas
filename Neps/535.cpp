#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, k;//n m tam matriz, x y inicio, k qtd de parede

int movx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int movy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int mat[201][201];

int ans = 0;

bool verifica(int a, int b){
    return(a>0 and b>0 and a<=n and b<=m and mat[a][b]==0);
}

void dfs(int a, int b){
    ans++;
    mat[a][b] = 1;
    for(int i=0; i<8; i++){
        int xn = a+movx[i], yn = b+movy[i];
        if(verifica(xn, yn)) dfs(xn, yn); 
    }
}


int main(){
    cin>>n>>m>>x>>y>>k;
    int u, v;
    for(int i=0; i<k; i++){
        cin>>u>>v;
        mat[u][v]=1;
    }
    dfs(x, y);
    cout<<ans<<endl;
    return 0;
}