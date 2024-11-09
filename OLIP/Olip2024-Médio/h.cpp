#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e2+1, MAX = 1e5+1;

int X, Y, N;
int A[MAXN], dist[MAX];

bool v(int a) {
    return (a>0 && a<MAX && dist[a]==-1);
}

int bfs(){
    queue<int> fila;
    fila.push(X);
    dist[X]=0;
    while(!fila.empty()){
        int u = fila.front(); 
        fila.pop();
        if(u==Y) break;

        for(int i=0; i<N; i++){
            if(v(u+A[i])){
                dist[u+A[i]]=dist[u]+1;
                fila.push(u+A[i]);
            }
            if(v(u-A[i])){
                dist[u-A[i]]=dist[u]+1;
                fila.push(u-A[i]);
            } 
            if(v(u*A[i])){
                dist[u*A[i]]=dist[u]+1;
                fila.push(u*A[i]);
            } 
            if(v(u/A[i])&&u%A[i]==0){
                dist[u/A[i]]=dist[u]+1;
                fila.push(u/A[i]);
            } 
        }
    }
    return dist[Y];
}

int main(){
    memset(dist, -1, sizeof dist);
    cin>>X>>Y>>N;
    for(int i=0; i<N; i++) cin>>A[i];
    cout<<bfs()<<endl;
    return 0;
}


