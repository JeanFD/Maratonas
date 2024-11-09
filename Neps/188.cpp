#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int vet[12];
    memset(vet, 0, sizeof vet);

    int ent, maior=0;
    for(int i=0; i<n; i++){
        cin>>ent;
        vet[ent-1]++;
        if(maior<vet[ent-1]) maior=vet[ent-1];
    }   

    bool f = true;
    for(int i=0; i<12; i++) if(vet[i]==maior) {
        if(f) {
            cout<<i+1;
            f=false;
        }else cout<<" "<<i+1;
    }

    cout<<endl;

    return 0;
}