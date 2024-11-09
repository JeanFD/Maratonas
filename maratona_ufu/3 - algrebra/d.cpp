#include <bits/stdc++.h>
using namespace std;
int inverso(int a){
    int aux =0;
    while(a){
        aux*=10;
        aux+=a%10;
        a/=10;
    }
    return aux;
}

int main(){
    int ent;
    cin>>ent;
    int aux=0;
    bool a = true;
    for(int i=0; i<=4&&a; i++){
        if(ent==inverso(ent)) a = false;
        else ent=ent+inverso(ent);
    }

    if(!a) cout<<ent<<endl;
    else cout<<'0'<<endl;


    return 0;
}