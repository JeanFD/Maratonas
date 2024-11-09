#include <bits/stdc++.h>
using namespace std;

bool nomeUsuario(string email){
    bool nome = true, valido = true;
    int tam = email.size();
    for(int i = 0; i < tam; i++){
        if(nome){
            if(email[i]=='@') nome = false;
            else if(!(email[i]>47&&email[i]<58)&&!(email[i]>96&&email[i]<123)&&(email[i]!='.')&&(email[i]!='_')) valido = false;
        }else{
            if((i==tam-1 && email[i]=='.')) valido=false;
            else if(!(email[i]>96&&email[i]<123)&&(email[i]!='.')) valido = false;
        }
    }
    return valido;
}


int main(){
    string ent;
    getline(cin, ent);
    cout<<nomeUsuario(ent)<<endl;
    return 0;
}