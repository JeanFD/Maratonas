#include <bits/stdc++.h>
#define dv(x,n) for(int i=0; i<n; i++) cout<<x[i]<<" ";
using namespace std;

const int MAXN = 1e5+5;
const int INF = 0x3f3f3f3f;
int v[MAXN], dp1[MAXN], dp2[MAXN];

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    for(auto &i:v) cin>>i;

    memset(dp1, INF, sizeof dp1);
    dp1[0]=-INF;

    int m = 0;

    for(int i=0; i<n; i++){
        int p = lower_bound(dp1, dp1 + n + 1, v[i]) - dp1;
        dp1[p] = v[i];
    }

    reverse(v, v+n);

    memset(dp2, 10, sizeof dp1);
    dp2[0]=-INF;
    for(int i=0; i<n; i++){
        int p = lower_bound(dp2, dp2 + n+ 1, v[i]) - dp2;
        dp2[p] = v[i];
    }

    int ans = 0;
    for (int i=1; i <= n; i++) {
        if (dp1[i]==dp2[i]) {
            ans = max(ans, ans1[i]*2 - 1);
        }
    }

    cout<<ans<<endl;

    return 0;
}