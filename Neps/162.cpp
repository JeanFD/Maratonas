#include <bits/stdc++.h>
using namespace std;
int main(){
    int d; cin>>d;
    int ans;
    if(d<=800) ans = 1;
    else if(d<=1400) ans = 2;
    else ans = 3;

    cout<<ans<<endl;
    
    return 0;
}