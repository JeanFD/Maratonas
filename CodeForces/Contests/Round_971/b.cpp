#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main(){ _
    int t, n;
    stack<string> pilha;
    string ent;

    cin>>t;

    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ent;
            pilha.push(ent);
        }
        bool e = false;

        while(!pilha.empty()){
            string cima = pilha.top();
            pilha.pop();
            for(int i=0; i<(int)cima.size(); i++){
                if(cima[i]=='#'){
                    if(e) cout<<" "<<i+1;
                    else cout<<i+1;
                    e=true;
                }
            }
        }
        cout<<endl;
    }



    return 0;
}