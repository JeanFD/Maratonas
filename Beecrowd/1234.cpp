#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

void abre(){
    freopen("in.txt", "r", stdin);
    cout<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"<<endl;
}

int main(){
    abre();
    string ent;
    while(getline(cin, ent)){
        int j = 1;
        for(int i=0; i<ent.size(); i++) ent[i] = tolower(ent[i]);
        for(int i=0; i<ent.size(); i++)
            if(ent[i]>96&&ent[i]<123) {
                if(j==1)  ent[i] -= 32;
                j*=-1;
            }
        cout<<ent<<endl;
    }
    return 0;
}