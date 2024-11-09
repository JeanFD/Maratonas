#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int vet[6];
    while(n--){
        for(auto &i: vet) cin>>i;

        if(vet[0]+vet[5]==vet[1]+vet[3]&&vet[1]+vet[3]==vet[2]+vet[4]) cout<<"SIM"<<endl;
        else cout<<"NAO"<<endl;
    }
    return 0;
}