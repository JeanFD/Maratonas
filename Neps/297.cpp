#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e3+3;
const int INF = 0x3f3f3f3f;

vector<pair<int, int>> grafo[MAXN];
bool vis[MAXN];
int dist[MAXN];
int n, m;
int s, t, b;

int dijkstra(int ini, int final){
    dist[ini] = 0;
    priority_queue<pair<int, int>> pq;
    pq.emplace(-dist[ini], ini);
    while(!pq.empty()){
        auto [d, u] = pq.top();
        pq.pop();
        if(u == final) return dist[final];
        if(-d != dist[u]) continue;
        for(auto [w, v] : grafo[u]) if(dist[v] > w+-d){
                dist[v] = -d+w; pq.emplace(-dist[v], v);
        }
    } return -1;
}

int main(){
    cin>>n>>m;
    memset(dist, INF, sizeof dist);
    for(int i=0; i<m; i++){
        cin>>s>>t>>b;
        grafo[s].push_back({b, t});
        grafo[t].push_back({b, s});
    }

    cout<<dijkstra(0, n+1)<<endl;
    return 0;
}