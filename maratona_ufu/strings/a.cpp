//Passou durante o contest

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){_
    string ent, rev;
    cin >> ent;
    int num = ent.size();
    bool t = true;
    for(int i=0; i<=num/2; i++) if(ent[i]!=ent[num-1-i]) t = false;
    if(t) cout<<"sim"<<endl;
    else cout<<"não"<<endl;
    return 0;
}