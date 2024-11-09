#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    map<int, int> mapa;
    int aux;
    while(n--){
        cin>>aux;
        mapa[aux]++;
    }
    cout<<mapa.size()<<endl;
    return 0;
}