#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string ent;
    string mai = "68752309146875230914687523";
    //            abcdefghijklmnopqrstuvwxyz
    getline(cin, ent);
    while(n--){
        getline(cin, ent);
        int tam = ent.size(), s = 0;
        for(int i=0; i<tam && s<12; i++){
            if(ent[i]==' ') continue;
            if(ent[i]>96&&ent[i]<123) cout<<(int)(ent[i]-'a')%10;
            if(ent[i]>64&&ent[i]<91) cout<<mai[(ent[i]-'A')];
            s++;    
        }
        cout<<endl;
    }

    return 0;
}