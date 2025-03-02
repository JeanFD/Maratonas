#include <bits/stdc++.h>
using namespace std;


int main(){
    int vet[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>vet[i][j];
        }
    }

    int base = vet[0][0] + vet[1][1] + vet[2][2];
    int soma = 0;
    bool flag = true;

    for(int i=0; i<3; i++){
        soma=0;
        for(int j=0; j<3; j++){
            soma+=vet[i][j];
        }
        if(soma!=base) flag = false;
    }

    for(int i=0; i<3; i++){
        soma=0;
        for(int j=0; j<3; j++){
            soma+=vet[j][i];
        }
        if(soma!=base) flag = false;
    }

    soma=0;
    for(int i=0; i<3; i++) soma+=vet[i][i];
    if(soma!=base) flag = false;

    soma=0;
    for(int i=0; i<3; i++) soma+=vet[i][2-i];
    if(soma!=base) flag = false;

    flag ? cout<<"SIM\n" : cout<<"NAO\n";
}