//Passou durante o contest

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){_
    int num, tam, t, i; cin>>num;
    string ent;
    num++;
    while(num--){
        getline(cin, ent);
        reverse(ent.begin(), ent.end());
        tam = ent.size();
        if(tam%2==0) t = tam/2;
        else t = (tam/2)+1;
        i = t;
        while(i<tam){
            cout<<ent[i];
            i++;
        }
        i=0;
        while(i<t){
            cout<<ent[i];
            i++;
        }
        cout<<endl;
    }
    return 0;
}