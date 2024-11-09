#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1010;
int n, m;
int dp[MAXN][MAXN];
int A[MAXN], B[MAXN];

int main(){

    cin>>n>>m;

    for(int i=0; i<n; i++) cin>>A[i];

    for(int i=0; i<m; i++) cin>>B[i];

    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++){
        if(A[i-1]!=B[j-1]) dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        else dp[i][j] = dp[i-1][j-1]+1;
    }

    int mac = dp[n][m];

    cout<<n-mac<<" "<<m-mac<<endl;
}


