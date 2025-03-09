#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        stack<char> pilha;
        int ans = 0;
        for(auto l : s){
            if(!pilha.empty() && ((pilha.top()+l=='B'+'S') || (pilha.top()+l=='C'+'F'))){
                ans++;
                pilha.pop();
            } 
            else{
                pilha.push(l);
            } 
        }     
        cout<<ans<<endl;
    }
    return 0;
}