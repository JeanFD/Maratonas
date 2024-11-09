#include <bits/stdc++.h>
using namespace std;

void abre(){
    freopen("in.txt", "r", stdin);
}

int main() {
    // abre();
    int N;

    int maior;
    bool ini = true;
    while(true){
        cin>>N;
        if(!N) break;

        if(ini)ini = false;
        else cout<<endl;


        maior = 0;
        string ent[N];
        for(int i=0; i<N; i++){
            cin>>ent[i];
            maior = max(maior, (int)ent[i].size());
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<maior-ent[i].size(); j++) cout<<" ";
            cout<<ent[i]<<endl;
        }
    }
    return 0;
}