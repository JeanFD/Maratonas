#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

queue<string> nome;
string fds[] = {"da", "de", "do", "dos", "e"};

void divide(string entrada){
    int ultesp = 0, tam = 0;
    for(int i = 0; i<entrada.size(); i++){
        if(entrada[i]==' '){
            nome.push(entrada.substr(ultesp, tam));
            ultesp = i+1;
            tam = 0;
        }else if(i==entrada.size()-1){
            nome.push(entrada.substr(ultesp, tam+1));
        }else{
            tam++;
        }
    }
}

bool confere(string teste){
    bool t=true;
    for(int i=0; i<5; i++) if(teste==fds[i]) t=false;
    return t;
}

int main(){_
    string ent, sai, aux;
    getline(cin, ent);
    divide(ent);


    sai+=nome.front();
    nome.pop();
    while(nome.size()>1){
        aux= nome.front();
        nome.pop();
        if(confere(aux)){sai+= ' '; sai+=aux[0]; sai+='.';}
    }
    aux= nome.front();
    sai+=' '+aux;

    cout<<sai<<endl;
    return 0;
}