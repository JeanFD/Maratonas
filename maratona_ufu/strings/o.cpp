//Passou durante o contest

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){
    string ent, rev;
    getline(cin, ent);
    int num = ent.size(), vog=0;
    for(int i=0; i<num; i++) if(ent[i]=='a'||ent[i]=='e'||ent[i]=='i'||ent[i]=='o'||ent[i]=='u'||ent[i]=='A'||ent[i]=='E'||ent[i]=='I'||ent[i]=='O'||ent[i]=='U') vog++;
    cout<<vog<<endl;
    return 0;
}