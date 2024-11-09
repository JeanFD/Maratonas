#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N;
    string ent;
    for(int i=0; i<N; i++){
        cin>>ent;
        int aux = 1, saida = 0;
        for(int i = ent.size()-1; i>=0; i--){
            saida+=aux*(ent[i]-'0');
            aux*=2;
        }
        cout<<saida<<endl;
    }
    return 0;
}