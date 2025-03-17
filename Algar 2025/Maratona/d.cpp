#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define d(x) cout<<#x<<": "<<x<<endl;

#define pb push_back
#define pf push_front
#define mp make_pair
#define f first
#define s second

typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int memo[31][31];

int dp(int n, int k){
    if(k == 0||k==n) return 1;
    if(!memo[n][k]) return memo[n][k] = dp(n-1, k-1) + dp(n-1, k);
    else return memo[n][k];
}

int main(){ _
    // freopen("in.txt", "r", stdin);
    // cout<<"--------------------APAGA O FREOPEN--------------------"<<endl;
    // freopen("out.txt", "w", stdout);

    int k, n;
    cin>>n>>k;

    cout<<dp(n, k)<<endl;

    return 0;
}
