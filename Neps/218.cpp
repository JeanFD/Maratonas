#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<fixed<<setprecision(2);
    char c;
    double a, b;

    cin>>c>>a>>b;
    if(c=='M') cout<<a*b<<endl;
    else cout<<a/b<<endl;

    return 0;
}