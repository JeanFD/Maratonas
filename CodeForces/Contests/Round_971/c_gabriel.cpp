#include <bits/stdc++.h>
using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define d(x) cout << #x << " = " << x << endl;

#define pb push_back
#define pf push_front
#define mp make_pair
#define f first
#define s second
#define r(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("gabout.txt", "w", stdout);
   int t;cin >> t;
   r(i,t){
        int x,y,k;
        cin >> x >> y >> k;
        int maior = max(x,y);
        if(maior == y){
        int res = (ceil(maior/(double)k)) * 2;
            cout << res  << endl;}
        else{
            int  res = ((ceil(maior/(double)k))*2)-1 ;
            cout << res   << endl;
        }
    }
}