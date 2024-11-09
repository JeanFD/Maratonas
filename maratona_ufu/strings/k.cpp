//
#include <bits/stdc++.h>
using namespace std;

int main(){
    string ent;
    getline(cin, ent);
    
    int conjuntos = 0, letras = 0;
    
    bool conj = false;
    for(int i=0; i<ent.size(); i++){

        if(ent[i] == ' ') {
            conjuntos++;
            conj = false;
        }else if(i==ent.size()-1){
            conjuntos++;
            letras++;
            conj = false;
        }else{
            letras++;
            conj = true;
        }

    }

    cout<<conjuntos<<endl;
    cout<<letras<<endl;
    
    return 0;
}