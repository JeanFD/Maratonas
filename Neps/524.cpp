#include <bits/stdc++.h>
using namespace std;
// A soma dos números das casas em que escondi teus brinquedos é igual a k

int main(){
    int n; cin>>n;
    
    int vet[n];
    for(int i=0; i<n; i++) cin>>vet[i];

    int k; cin>>k;

    int aux, l=0, r=n-1;

    while(true){
        aux = vet[l]+vet[r];
        if(aux>k) r--;
        else if(aux<k) l++;
        if(aux==k) break;
    }

    cout<<vet[l]<<" "<<vet[r]<<endl;

    return 0;
}