//Passou durante o contest

#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){_
    string a1, a2;
    getline(cin,a1);
    getline(cin,a2);
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    if(a1==a2) cout<<"sim"<<endl;
    else cout<<"nao"<<endl;
    return 0;
}