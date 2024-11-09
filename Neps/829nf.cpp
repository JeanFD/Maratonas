#include <bits/stdc++.h>
#define d(x) cout<<#x<<" = "<<x<<endl;
using namespace std;
const int MAX = 1e3+3;

int vet[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k, u; cin>>n>>k>>u;
    unordered_set<int> cart[n];

    int ent;
    for(int i=0; i<n; i++) for(int j=0; j<k; j++){
        cin>>ent;
        cart[i].insert(ent);
    }
    bool bingo = false;
    int ans=0;
    for(int i=0; i<u; i++){
        cin>>ent;
        if(!bingo) for(int j=0; j<n; j++){
            if(cart[j].find(ent)!=cart[j].end()) vet[j]++;
            if(vet[j]==k) bingo=true;
        }
    }

    bool espaco = false;
    for(int i=0; i<n; i++){
        if(vet[i]==k){
            if(espaco) cout<<" ";
            espaco = true;
            cout<<i+1;
        }
    }
    cout<<endl;
    
    return 0;
}