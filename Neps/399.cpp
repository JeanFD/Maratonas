#include <bits/stdc++.h>
using namespace std;

int main(){
    string ent; cin>>ent;
    
    string v = {'a', 'e', 'i', 'o', 'u'};

    string vog="", con="";

    for(int i=0; i<(int)ent.size(); i++){
        bool f = false;
        for(auto a : v) if(a==ent[i]) f=true;
        if(f) vog+=ent[i];
        else con+=ent[i];
    }

    cout<<"Vogais: "<<vog<<endl<<"Consoantes: "<<con<<endl;

    return 0;
}