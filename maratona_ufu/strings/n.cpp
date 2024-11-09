//Passou durante o contest

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){_
    string ent, resp = "";
    int tam;
    char aux;
    getline(cin, ent);
    tam = ent.size();
    for(int i=0; i<tam; i++){
        if(ent[i]!=aux){
            resp+=ent[i];
            aux = ent[i];
        }
    }
    cout<<resp<<endl;
    return 0;
}