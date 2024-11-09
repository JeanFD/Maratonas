#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    char a, b;
    string ent, ans;
    map<char, char> dicionario;
    cin>>n>>m;
    cin.ignore();

    for(int i=0; i<n; i++){
        cin>>a>>b;
        dicionario[a]=b;
        dicionario[b]=a;
    }

    getline(cin, ent);

    for(int i=0; i<m; i++){
        ans="";
        getline(cin, ent);
        int tam = ent.size();
        for(int i=0; i<tam; i++){
            if(dicionario[ent[i]]==NULL) ans+=ent[i];
            else ans+=dicionario[ent[i]];
        }
        cout<<ans<<endl;
    }
    return 0;
}