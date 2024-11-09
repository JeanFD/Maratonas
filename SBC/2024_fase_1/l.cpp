#include <bits/stdc++.h>
using namespace std;

#define MAXN 112345

int vet[32];

void add_binario(int num){
    int cont = 31;
    while(num>0){
        vet[cont]+=num%2;
        num/=2;
        cont--;
    }
}

int ans(){
    int num=0;
    for(int i=0; i<32; i++){
        if(vet[31-i]!=0) {
            num+=pow(2,i);
            vet[31-i]--;
        }
    }

    return num;
}

int main(){
    int n, aux; 
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>aux;
        add_binario(aux);
    }

    bool esp = false;

    for(int i=0; i<n; i++){
        if(esp) cout<<" ";
        esp=true;
        cout<<ans();
    }


    return 0;
}