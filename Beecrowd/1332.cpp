#include <bits/stdc++.h>
using namespace std;

void abre(){
    freopen("in.txt", "r", stdin);
}

int main() {
    abre();

    int N; cin>>N;
    string ent;
    while(N--){
        cin>>ent;
        if(ent.size()>3) cout<<3<<endl;
        else if(ent[0]=='o'&&ent[1]=='n'||ent[0]=='o'&&ent[2]=='e'||ent[1]=='n'&&ent[2]=='e') cout<<1<<endl;
        else cout<<2<<endl;
    }
    
    return 0;
}