#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[4];
    for(int i=0; i<4; i++){
        cin>>vet[i];
    }

    sort(vet, vet+4);
    cout<<abs(vet[0]+vet[3]-(vet[2]+vet[1]))<<endl;
    return 0;
}