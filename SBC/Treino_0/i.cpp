#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+10;
const long long INF = 1e18;

vector<pair<int, int>> adj[MAX];
long long dist[MAX];
int pai[MAX];

long long dk(int s, int t){
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long, int>>> pq;
    fill(begin(dist), end(dist), INF);
    dist[s]=0;
    pq.emplace(dist[s],s);
    while(!pq.empty()){
        auto [d,u] = pq.top();
        pq.pop();
        if(d!=dist[u]) continue;
        if(u == t) return dist[t];
        
        for(auto [v,w] : adj[u]){
            if(dist[v] > dist[u]+w){
                dist[v] = dist[u]+w;
                pq.emplace(dist[v],v);
                pai[v] = u;
            }
        }
    }
    return -1;
}

int main(){
    int a, b;
    cin>>a>>b;
    for(int i=0; i<b; i++){
        int x, y, w;
        cin>>x>>y>>w;
        adj[x].emplace_back(y,w);
        adj[y].emplace_back(x,w);
    }
    long long ans = dk(1,a);
    
    if(ans==-1) cout<<"-1\n";
    else{
        vector<int> path;

        for(int i=a; i!=1; i=pai[i]){
            path.push_back(i);
        }
        path.push_back(1);
        reverse(path.begin(), path.end());
        for(int i=0; i<(int)path.size(); i++){
            if(i)cout<<" ";
            cout<<path[i]<<" ";
        }
    }

}