#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans="";
    for(int i=0; i<(int)s.size(); i++){
        if(s[i]!='.') ans+=s[i];
    }
    cout<<ans<<endl;
    return 0;
}