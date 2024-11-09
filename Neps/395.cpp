#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[10];
    for(int i=0; i<10; i++) cin>>vet[i];
    int n; cin>>n;
    bool f = false;
    for(int i=0; i<10; i++) if(vet[i]==n) f = true;

    if(f) cout<<"SIM"<<endl;
    else cout<<"NAO"<<endl;

    return 0;
}