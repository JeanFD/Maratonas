#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    cin.ignore();
    string ent, pal;
    set<string> lista;
    while(n--){
        bool esp = false;
        lista.clear();
        getline(cin, ent);

        istringstream iss(ent);

        while(iss>>pal) lista.insert(pal);

        for(auto i : lista) {
            if(esp) cout<<' ';
            esp = true;
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}