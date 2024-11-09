#include <bits/stdc++.h>
using namespace std;

void abre(){
    freopen("in.txt", "r", stdin);
}

int main() {
    // abre();

    int N; cin>>N;
    string a, b;
    int tam;
    bool ans;
    while(N--){
        cin>>a>>b;
        ans = true;
        tam = b.size();
        int j = tam-1;
        if (tam > a.size()) ans = false;
        for(int i = a.size()-1; i>a.size()-1-tam; i--){
            if(a[i]!=b[j]) ans = false;
            j--; 
        }

        if(ans) cout<<"encaixa"<<endl;
        else cout<<"nao encaixa"<<endl;        
    }
    
    return 0;
}