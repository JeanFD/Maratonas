#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(auto &i:s){
        if(i>='A'&&i<='O') i = '2'+((i-'A')/3);
        else if (i>='P'&&i<='S') i = '7';
        else if (i>='T'&&i<='V') i = '8';
        else if (i>='W'&&i<='Z') i = '9';
    }
    cout<<s<<endl;
    return 0;
}