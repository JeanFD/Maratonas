#include<bits/stdc++.h>

using namespace std;

vector<string> nomes;

int main() {

    int N; cin>>N;
    string ent;
    while(N--){
        cin>>ent;
        nomes.push_back(ent);
    }

    sort(nomes.begin(), nomes.end());

    for(int i=0; i<nomes.size(); i++){
        cout<<nomes[i]<<endl;
    }

    return 0;
}