#include <bits/stdc++.h>
using namespace std;
int main(){
    char v[5] = {'a', 'e', 'i', 'o', 'u'};
    string ent, vog="";
    cin>>ent;
    for(int i=0; i<(int)ent.size(); i++) for(char l:v) if(ent[i]==l) vog+=l;
    string rev = vog;
    reverse(rev.begin(), rev.end());

    if(rev==vog) cout<<"S"<<endl;
    else cout<<"N"<<endl;

    return 0;
}