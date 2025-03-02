#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    if(s[0]<='z'&&s[0]>='a') s[0] = s[0]-'a'+'A';
    for(int i=1; i<(int)s.size(); i++){
        if(s[i-1]==' ' && s[i]<='z' && s[i]>='a') s[i]=s[i]-'a'+'A';
        if(s[i-1]!=' ' &&s[i]<='Z'&&s[i]>='A') s[i] = s[i]-'A'+'a';
    }
    cout<<s<<endl;
    return 0;
}