#include <bits/stdc++.h>
using namespace std;

void abre(){
    freopen("teste.in", "r", stdin);
    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\FECHA FECHA FECHA\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
}

int main(){
    // abre();
    int n, m; cin>>n>>m;
    int e, x, y;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++){
        cin>>e;
        if(e==0) x=i, y=j;
    }

    cout<<x<<" "<<y<<endl;

    return 0;
}