#include <bits/stdc++.h>
using namespace std;

bool f(string a, string b){
    if(a.size()!=b.size()) return a.size()<b.size();
    else return a<b;
}

vector<string> frutas;

int main() {
    int N; cin>>N;
    string ent;
    while(N--){
        cin>>ent;
        frutas.push_back(ent);
    }

    sort(frutas.begin(), frutas.end(), f);

    for(int i = 0; i < frutas.size(); i++){
        cout<<frutas[i]<<endl;
    }

    return 0;
}