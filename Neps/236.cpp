#include <bits/stdc++.h>
#define d(x) cout<<#x<<" - "<<x<<endl;
using namespace std;

int main(){
    int n;
    cin>>n;
    int vet[n][n];

    bool f = true;
    int ans = (-1), aux=0;

    //confere as linhas
    for(int i=0; i<n; i++) {
        aux=0;
        for(int j=0; j<n; j++){
            cin>>vet[i][j];
            aux+=vet[i][j];
        }
        if(ans==-1) ans = aux;
        else if(ans!=aux) f = false;
        
    }

    //confere as colunas
    for(int i=0; i<n; i++) {
        aux=0;
        for(int j=0; j<n; j++){
            aux+=vet[j][i];
        }
        if(ans!=aux) f = false;
    }

    //confere diagonal 1
    aux=0;
    for(int i=0; i<n; i++) {
        aux+=vet[i][i];
    }
    if(ans!=aux) f = false;

    //confere diagonal 2
    aux=0;
    for(int i=0; i<n; i++) {
        aux+=vet[i][n-1-i];
    }
    if(ans!=aux) f = false;

    if(f) cout<<ans<<endl;
    else cout<<"-1"<<endl;
    return 0;
}