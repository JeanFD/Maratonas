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
 
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cin>>memo[i][j];
        }
    }
    for(int i=n-2; i>=0; i--){
        for(int j=i; j>=0; j--){
            memo[i][j]+=max(memo[i+1][j], memo[i+1][j+1]);
        }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<memo[i][j];
    //     }
    //     cout<<endl;
    // }
    cout<<memo[0][0]<<endl;
    return 0;
}
