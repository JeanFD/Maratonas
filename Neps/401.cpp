#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[10];
    int menor=999;
    for(int i=0; i<10; i++){
        cin>>vet[i];
        menor = min(menor, vet[i]);
    }

    cout<<"Menor: "<<menor<<endl;

    cout<<"Ocorrencias:";
    for(int i=0; i<10; i++){
        if(vet[i]==menor) {
            vet[i]=-1;
            cout<<" "<<i;
        }
    }
    cout<<endl;

    cout<<vet[0];
    for(int i=1; i<10; i++){
        cout<<" "<<vet[i];
    }cout<<endl;
    
    return 0;
}