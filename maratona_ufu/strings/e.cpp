#include <bits/stdc++.h>
using namespace std;

string comprime(string palavra){
    int tam = palavra.size(), qtd=0;
    string resp = "";
    char ul = '.';
    for(int i=0; i<=tam; i++){
        if(palavra[i]==ul) qtd++;
        else {
            if(qtd>2){
                resp+=ul;
                resp+='0'+qtd;
            }else{
                for(int i=0; i<qtd; i++){
                    resp+=ul;
                }
            }
            ul=palavra[i];
            qtd=1;
        }
    }
    return resp;
}

int main(){
    string ent;
    getline(cin, ent);

    cout<<comprime(ent)<<endl;

    return 0;
}