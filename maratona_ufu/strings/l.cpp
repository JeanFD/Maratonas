#include <bits/stdc++.h>
using namespace std;

int main(){
    string ent;
    int mai=0, posmai=0, atu, posatu;
    getline(cin, ent);
    for(int i = 0; i < ent.size(); i++){
        if(ent[i]==' '){
            if(atu>mai){
                mai=atu;
                posmai = posatu;
            }
            atu=0;
            posatu=i+1;

        }
        else{
            atu++;
        }
    }
    cout<<ent.substr(posmai, mai)<<endl;
    return 0;
}