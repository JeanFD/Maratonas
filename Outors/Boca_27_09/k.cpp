#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long k, ans=0;
    cin>>k;
    if((k+(unsigned long long)1)%(unsigned long long)6==(unsigned long long)0) {
        cout<<"-1"<<endl;
        return 0;
    }
    else ans = (k - (k/(unsigned long long)5)) * (unsigned long long)5;
    cout<<ans<<endl;
    return 0;
}