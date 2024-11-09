#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

int main(){
    int n, h; cin>>n>>h;
    int ans=0, aux;
    rep(i, 0, n) {
        cin>>aux;
        if(aux<=h)ans++;
    }

    cout<<ans<<endl;

    return 0;
}