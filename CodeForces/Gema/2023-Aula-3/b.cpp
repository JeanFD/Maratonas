#include<bits/stdc++.h>
using namespace std;

void abre(){
    freopen("teste.in", "r", stdin);
    cout<<"//////////////////FREOPEN FREOPEN\\\\\\\\\\\\\\\\\\\\\""<<endl;
}

int main(){
    // abre();
    long long parque[100][100];
    int n, m; cin>>n>>m;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++){
        cin>>parque[i][j];
    }

    for(int j=0; j<m; j++){
        bool menor = true, maior = true, igual = true;
        for(int i=0; i<n-1; i++){
            if(parque[i][j]<=parque[i+1][j]) maior = false;
            if(parque[i][j]>=parque[i+1][j]) menor = false;
            if(parque[i][j]!=parque[i+1][j]) igual = false;
        }
        if(menor||maior||igual) cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }

    return 0;
}