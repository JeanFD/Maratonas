#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int p, q, r;
    char c;
    cin>>p>>c>>q;
    if(c=='*') r = p * q;
    else r = p + q;

    if(r>n) cout<<"OVERFLOW"<<endl;
    else cout<<"OK"<<endl;
}