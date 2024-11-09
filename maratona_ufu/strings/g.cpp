//Passou durante o contest

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){_
    string ent, fim="";
    int num;
    cin >> num;
    for(int i=0; i<num; i++){
        cin>>ent;
        fim+=ent;
        fim+=" ";
    }
    cout<<fim<<endl;
    return 0;
}