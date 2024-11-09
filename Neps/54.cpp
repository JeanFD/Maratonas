#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; cin>>c;
    int aux, ans=0; 
    set<int> estoque;
    while(c--){
        cin>>aux;
        if(estoque.count(aux)==0){
            estoque.insert(aux);
            ans+=2;
        }else{
            estoque.erase(aux);
        }
    }
    cout<<ans<<endl;
    return 0;
}