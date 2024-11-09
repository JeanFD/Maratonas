#include <bits/stdc++.h>
using namespace std;

int main(){
    string ent;
    cin>>ent;

    for(int i=0; i<(int)ent.size(); i++) ent[i]=tolower(ent[i]);

    if(ent=="oposicao"||ent=="contrariedade") cout<<"mas\n";
    else cout<<"mais\n";

    return 0;
}