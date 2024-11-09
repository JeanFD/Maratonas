#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int vet[n];

    for(auto &i: vet) cin>>i;

    int maior=0, som=0;
    for(int i=0; i<n; i++){
        som = max(vet[i]+som, vet[i]);
        maior = max(som, maior);
    }

    cout<<maior<<endl;
    return 0;
}