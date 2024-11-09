#include <bits/stdc++.h>

#define maxn 13

using namespace std;


int grafo[maxn][maxn];
int vis[maxn][maxn];
int altura;

vector<pair<int, int>> mov = {{0,1},{0,-1},{-1,0},{1,0}};

bool verifica(int x, int y){
    return x>=0 and x<maxn and y>=0 and y<maxn and vis[x][y]!=1 and grafo[x][y]!=88 and grafo[x][y]!=11; 
}

bool verificam(int x, int y){
    return x>=0 and x<maxn and y>=0 and y<maxn and grafo[x][y]!=88 and grafo[x][y]!=11; 
}

double media(int a, int b){
    int cont=0;
    double media=0;
    for(auto i: mov){
            int x = a+i.first, y = b+i.second;
            if(!verificam(x, y)) continue;
            cont++;
            media+=(grafo[a][b]);
    }
    media/=cont*1.0;
    return media;
}

pair<int, int> bfs(int x, int y){
    queue<pair<int, int>> fila;

    fila.push({x, y});
    while(!fila.empty()){
        int a = fila.front().first, b = fila.front().second;

        if(grafo[a][b]==0) if(media(a, b)<altura) return {a, b};

        fila.pop();
        for(auto i: mov){
            x = a+i.first, y = b+i.second;
            if(!verifica(x, y)) continue;
            vis[x][y]=1;
            fila.push({x, y});
        }
    }
}

void legrafo(){
    for(int i=0; i<maxn; i++)
        for(int j=0; j<maxn; j++){
            cin>>grafo[i][j];
        }
}

// void printagrafo(){
//     for(int i=0; i<maxn; i++){
//         for(int j=0; j<maxn; j++){
//             cout<<grafo[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<ans<<endl;
// }

int main(){
    
    while(cin>>altura){
        memset(vis, 0, sizeof vis);

        legrafo();

        pair<int, int> ans = bfs(0, 7);

        cout<<"linha > "<<ans.second+1<<" coluna > "<<ans.first+1<<endl;
    }

    return 0;
}