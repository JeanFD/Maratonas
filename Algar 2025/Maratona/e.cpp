#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define d(x) cout<<#x<<": "<<x<<endl;

typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll memo[101][101];



int main(){ _
    // freopen("in.txt", "r", stdin);
    // cout<<"--------------------APAGA O FREOPEN--------------------"<<endl;
    // freopen("out.txt", "w", stdout);
    memo[0][0]=1;
    int m, n;
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i) memo[i][j]+=memo[i-1][j];
            if(j) memo[i][j]+=memo[i][j-1];
        }
    }
    cout<<memo[m-1][n-1]<<endl;
    return 0;
}
