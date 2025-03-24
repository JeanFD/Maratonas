#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main(){
    int c,V,m;
    cin>>c;
    while(c--){
        vector<pair<int,int>> AL[1001];
        cin>>V>>m;
        vector<int> dist(V, INF); dist[0] = 0; //V tamanho, s origem
        int x, y, t;
        for(int i=0; i<m; i++){
            cin>>x>>y>>t;
            AL[x].push_back({y, t});
        }

        for(int i=0; i<V-1; i++){
            bool modified = false;
            for (int u=0; u<V; ++u)
                if(dist[u]!=INF)
                    for(auto&[v, w]:AL[u]){
                        if(dist[u]+w>=dist[v])continue;
                        dist[v] = dist[u]+w;
                        modified=true;
                    }
            if(!modified) break;
        }

        bool hasNegativeCycle = false;
        for (int u=0; u<V; ++u)
            if(dist[u]!=INF)
                for(auto &[v, w] : AL[u])
                    if(dist[v] > dist[u]+w)
                        hasNegativeCycle = true;
        
        if(hasNegativeCycle) cout<<"possible"<<endl;
        else cout<<"not possible"<<endl;

    }    
    return 0;
}