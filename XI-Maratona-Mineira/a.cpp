#include<bits/stdc++.h>
using namespace std;

int main(){
    int y; cin>>y;

    int ans = 2024 - y;
    ans *=2;
    ans = 2024-ans;
    cout<<ans<<endl;
    return 0;   
}