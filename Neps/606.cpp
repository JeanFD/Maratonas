#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> dic;
set<string> art;

unordered_map<string, unordered_set<string>> grafo;
map<string, int> dist;
map<string, bool> vis;

void bfs(string a){
    dist[a]=0;
    queue<string> fila;
    fila.push(a);
    vis[a]=true;
    while(!fila.empty()){
        string atual = fila.front();
        fila.pop();
        for(auto i : grafo[atual]){
            if(!vis[i]){
                vis[i]=true;
                dist[i]=dist[atual]+1;
                fila.push(i);
            }
        }
    }
}

int main(){
    int n;
    cin>>n; 

    string v1, v2;
    int cont = 0;
    while(n--){
        cin>>v1>>v2;
        grafo[v1].insert(v2);
        art.insert(v1), art.insert(v2);
    }

    string ult;
    for(auto i : art){
        if(!ult.empty()){
            grafo[i].insert(ult);
            grafo[ult].insert(i);
        }
        ult = i;
    }
    cin>>v1>>v2;
    bfs(v1);
    cout<<dist[v2]<<endl;
}