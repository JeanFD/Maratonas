#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){_
    string ent, rev="";
    getline(cin, ent);
    int nume; cin>>nume;
    int num = ent.size();
    for(int i=0; i<num; i++){
        if((int(ent[i]) > 64 && int(ent[i]) < 91)){
            rev += 'A' + ((ent[i] - 'A') + nume) % 26;
        }else if((int(ent[i]) > 96 && int(ent[i]) < 123)){
            rev += 'a' + ((ent[i] - 'a') + nume) % 26;
        }
        else rev += ent[i];
    } 
    cout<<rev<<endl;
    return 0;
}