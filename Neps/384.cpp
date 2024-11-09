#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> fila;

    int n; cin>>n;

    int vet[n], id;

    for(int i=0; i<n; i++){
        cin>>vet[i];
        fila.insert(vet[i]);
    }

    int m; cin>>m;

    for(int i=0; i<m; i++){
        cin>>id;
        fila.erase(id);
    }

    bool espaco = false;
    for(auto i : vet){
        if(fila.count(i)==0) continue;
        if(espaco) cout<<" ";
        espaco = true;
        cout<<i;
    }

    cout<<endl; 

    return 0;
}