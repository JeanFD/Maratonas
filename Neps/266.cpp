#include <bits/stdc++.h>
using namespace std;

int main(){
    int soma = 0;
    string s;
    cin>>s;
    for(int i=0; i<(int)s.size(); i++) soma+=s[i]-'0';
        
    cout<<(((s[(int)s.size()-1]-'0') % 2 == 0) ? "S" : "N")<<endl;
    cout<<(((soma % 3 == 0) ? "S" : "N"))<<endl;
    cout<<(((s[(int)s.size()-1]-'0') % 5 == 0) ? "S" : "N")<<endl;

    return 0;
}