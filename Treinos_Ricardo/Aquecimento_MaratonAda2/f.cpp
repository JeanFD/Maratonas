#include <bits/stdc++.h>

#define maxn 20

using namespace std;

int tam;

int grafo[maxn][maxn];
int vis[maxn][maxn];
int ans;

vector<pair<int, int>> mov = {{0,1},{0,-1},{-1,0},{1,0}};

bool verifica(int x, int y){
    return x>=0 and x<tam and y>=0 and y<tam and grafo[x][y]!=1; 
}

int bfs(int x, int y){
    int cont=1;
    queue<pair<int, int>> fila;

    fila.push({x, y});
    while(!fila.empty()){
        int a = fila.front().first, b = fila.front().second;

        grafo[a][b] = 1;
        fila.pop();
        for(auto i: mov){
            x = a+i.first, y = b+i.second;
            if(!verifica(x, y)) continue;
            grafo[x][y]=1;
            fila.push({x, y});
            cont++;
        }
    }
    return cont;
}

void legrafo(){
    for(int i=0; i<tam; i++)
        for(int j=0; j<tam; j++){
            cin>>grafo[i][j];
            if(grafo[i][j]==1) ans++;
        }
}

void printagrafo(){
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            cout<<grafo[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<ans<<endl;
}

int main(){
    cout<<fixed<<setprecision(2);
    int n; cin>>n;
    while(n--){
        ans = 0;
        cin>>tam;
        legrafo();
    

        for(int i=0; i<tam; i++)
            for(int j=0; j<tam; j++)
                if((i==0||j==0||i==tam-1||j==tam-1)&&grafo[i][j]==0) bfs(i, j);


        for(int i=0; i<tam; i++)
            for(int j=0; j<tam; j++)
                if(grafo[i][j]==0){ ans+=bfs(i,j);
                }



        double dans = ans/2.0;
        cout<<dans<<endl;

    }
    return 0;
}