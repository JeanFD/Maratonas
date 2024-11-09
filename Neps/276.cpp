#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<char> fila;
    for(int i=65; i<81; i++) fila.push(i);
    int a, b;
    for(int i=0; i<14; i++){
        cin>>a>>b;
        if(a>b){
            fila.push(fila.front());
            fila.pop();
            fila.pop();
        }else{
            fila.pop();
            fila.push(fila.front());
            fila.pop();
        }
    }
    cin>>a>>b;
    if(a>b) cout<<fila.front()<<endl;
    else{
        fila.pop();
        cout<<fila.front()<<endl;
    }
    
    return 0;
}