#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string ent; int qtd = 0,  ans = 0; bool f = true;
    for(int i=0; i<n; i++){
        cin>>ent;
        if(ent[0]=='.'&&qtd==0) ans++;
        if(ent[0]=='.') qtd++;
        if(ent[0]=='-') qtd=0;
        if(qtd>2) f = false;
    }

    if(f) cout<<ans<<endl;
    else cout<<'N'<<endl;
}