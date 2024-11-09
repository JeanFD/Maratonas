#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
 
int main(){
    int t; 
    int n, k;
    long long ans;
    cin>>t;
 
    while(t--){
        ans = INF;
        cin>>n>>k;
        int l, r;
        
        for(long long i=n-2; i>=0; i--){
            long long a = ((i+1) * (k + k+i))/2;
            long long b = ((n-i-1) * (k+i+1 + k+n-1))/2;
            ans = min(ans, abs(a-b));
        }
        cout<<ans<<endl;
    }
    return 0;
}