#include <bits/stdc++.h>
using namespace std;

const int MAXN = 300010;
const int INF = 0x3f3f3f3f;

int main(){
    string v;
    int dp[MAXN];
    cin>>v;

    memset(dp, INF, sizeof dp);
    dp[0]=-INF;

    for(int i=0; i<(int)v.size(); i++){
        int p = upper_bound(dp, dp + v.size() + 1, v[i]-'A') - dp;
        dp[p] = v[i]-'A';
    }

    int ans = 0;

    for(int i=0; i<=(int) v.size(); i++)
        if(dp[i]<INF) ans = i;

    cout<<ans<<endl;

    return 0;
}