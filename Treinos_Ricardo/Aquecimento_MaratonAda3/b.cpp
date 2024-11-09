#include <bits/stdc++.h>
using namespace std;

int main(){
    string ent;
    while(getline(cin, ent)){
        if(ent=="esquerda") cout<<"ingles"<<endl;
        else if(ent=="direita") cout<<"frances"<<endl;
        else if(ent=="nenhuma") cout<<"portugues"<<endl;
        else if(ent=="as duas") cout<<"caiu"<<endl;
    }
    return 0;
}