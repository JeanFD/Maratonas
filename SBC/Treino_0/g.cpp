#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n;
    map<int, int> lista;
    int aux;
    for(int i=1; i<=n; i++){
        cin>>aux;
        lista[aux] = i;
    }
    cin>>m;
    long long a=0, b=0;
    for(int i=0; i<m; i++){
        cin>>aux;
        a +=lista[aux];
        b +=n-lista[aux]+1;
    }

    cout<<a<<" "<<b<<endl;

}