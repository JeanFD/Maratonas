#include <bits/stdc++.h>
using namespace std;

int main(){

    int N; cin>>N;
    int a, ans=0;
    while(N--){
        cin>>a;
        if(a%2==0) ans++;
    }

    cout<<ans<<endl;

    return 0;
}