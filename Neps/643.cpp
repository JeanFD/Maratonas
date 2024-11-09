#include <bits/stdc++.h>
#define d(x) cout<<#x<<": "<<x<<endl;
#define INF 0x3f3f3f3f
using namespace std;

int main(){
    int c, e, l, p; //qtd cidades, qtd estradas, cidade atual, qtd pedagios permitidos;
    int cont = 0;
    while(cin>>c>>e>>l>>p && (c+e+l+p)){
        vector<unordered_set<int>> g(c+1);
        int dist[c+1];
        memset(dist, INF, sizeof dist);
        int u, v;
        for(int i=0; i<e; i++){
            cin>>u>>v;
            g[u].insert(v);
            g[v].insert(u);
            // d(&g[v]);
        }
        queue<int> fila;
        fila.push(l);
        dist[l]=0;
        // d(dist[l])
        while(!fila.empty()){
            int atual = fila.front();
            fila.pop();
            for(auto i : g[atual]){
                if(dist[i]==INF){
                    dist[i]=dist[atual]+1;
                    fila.push(i);
                }
            }
        }

        cout<<"Teste "<<++cont<<endl;
        bool esp = false;

        for(int i=1; i<=c; i++){
            if(dist[i]<=p&&i!=l){
                if(esp) cout<<" ";
                esp = true;
                cout<<i;
            }
            // d(dist[i])
        }
        cout<<"\n\n";
    }
    return 0;
}