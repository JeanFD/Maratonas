#include<bits/stdc++.h>
using namespace std;

unordered_map<string, int> votos;

bool f (pair<string, int> a, pair<string, int> b){
    return a.second >= b.second;
}

int main(){
    int N; cin>>N;
    string ent;
    while(N--){
        cin>>ent;
        votos[ent]++;
    }

    vector<pair<string, int> > resultado;

    for(const auto& par : votos) {
        resultado.push_back(par);
    }

    sort(resultado.begin(), resultado.end(), f);
    for(const auto &par : resultado){
        cout<<par.first<<endl;
    }

    return 0;
}