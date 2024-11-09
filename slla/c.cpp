#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;

int main(){ _
    string ent; cin>>ent;
    int n; cin>>n;
    map<int, set<int>> letras;
    char u, v;
    for(int i=0; i<n; i++){
        cin>>u>>v;
        letras[v-'a'].insert(u);
    }
    bool t = true;
    for(int i=1; i<(int)ent.size(); i++){
        if(letras[ent[i]-'a'].count(ent[i-1])==0) t=false;
    }

    if(t) cout<<"SIM"<<endl;
    else cout<<"NAO"<<endl;
    return 0;
}