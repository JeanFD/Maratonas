#include <bits/stdc++.h>
using namespace std;

int main(){
    string ent; cin>>ent;
    cin.ignore();
    char a; cin>>a;

    int ans = 0;

    for(int i=0; i<(int)ent.size(); i++) if(ent[i]==a) ans++;
    
    cout<<ans<<endl; 
    return 0;
}