#include <bits/stdc++.h>
using namespace std;

typedef struct{
    string nome;
    char zona;
    int distancia;
}Pessoa;

bool f(Pessoa a, Pessoa b){
    if(a.distancia==b.distancia){
        if(a.zona==b.zona){
            return a.nome<b.nome;
        }return a.zona<b.zona;
    }return a.distancia<b.distancia;
}

int main(){
    int n;
    while(cin>>n){
        vector<Pessoa> pessoas;
        Pessoa ent;
        for(int i=0; i<n; i++){
            cin>>ent.nome>>ent.zona>>ent.distancia;
            pessoas.push_back(ent);
        }

        sort(pessoas.begin(), pessoas.end(), f);

        for(int i=0; i<pessoas.size(); i++){
            cout<<pessoas[i].nome<<endl;
        }
    }

    return 0;
}