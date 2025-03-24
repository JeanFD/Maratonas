#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[3];
    int t;
    cin>>t;
    while(t--){
        for(int i=0; i<3; i++){
            cin>>vet[i];
        }
        sort(vet, vet+3);
        cout<<vet[1]<<endl;
    }
    return 0;
}