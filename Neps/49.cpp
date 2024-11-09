#include <bits/stdc++.h>
#define _ sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

int vet[10010], n;
int vis[10010];
queue<pair<int,int>> pos;

void pv(int p){
    cout<<p<<": ";
    rep(i, 0, n-1) cout<<vet[i]<<" ";
    cout<<vet[n-1]<<endl;
}

void ver(){
    while(!pos.empty()){
        int p = pos.front().first, d = pos.front().second;
        pos.pop();
        if(vet[p]==-1) vet[p] = min(d, 9);

        if(p-1>=0&&vet[p-1]==-1)pos.push(make_pair(p-1, d+1));
        if(p+1<n&&vet[p+1]==-1)pos.push(make_pair(p+1, d+1));
        //pv(p);
    }
}


int main(){
    memset(vis,-1, sizeof vis);
    cin>>n;
    rep(i, 0, n) {
        cin>>vet[i];
        if(vet[i]==0) pos.push(make_pair(i, 0));
    }
    ver();

    rep(i, 0, n-1) cout<<vet[i]<<" ";
    cout<<vet[n-1]<<endl;
    return 0;
}