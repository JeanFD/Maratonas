#include <bits/stdc++.h>
#define d(x) cout<<#x<<" = "<<x<<endl;
using namespace std;
int main(){
    int n; cin>>n;
    string ent;
    while(n--){
        
        cin>>ent;
        int tam = ent.size();
        stack<char> pilha;
        
        for(int i=0; i<tam; i++){
            if(pilha.empty()) pilha.push(ent[i]);
            else{
                int aux = ent[i]-pilha.top();
                if(aux==1||aux==2) pilha.pop();
                else pilha.push(ent[i]);
            }
        }

        if(pilha.empty()) cout<<'S'<<endl;
        else cout<<'N'<<endl;
    } 
    return 0;
}