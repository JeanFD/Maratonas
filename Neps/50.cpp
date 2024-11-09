#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;

    cin>>a>>b>>c>>d;

    bool ans = true;

    if(a!=b+c+d) ans = false;
    if(d!=b+c) ans = false;
    if(b!=c) ans = false;

    if(ans) cout<<"S\n";
    else cout<<"N\n";
    return 0;
}