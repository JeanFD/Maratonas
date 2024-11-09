#include <bits/stdc++.h>
using namespace std;

int n, s, d, f;
int memo[81][14];

int dp(int som, int dado){
    // if(som == 0) cout<<som<<' '<<face<<' '<<dado<<endl;
    if(dado==d) return (som==s);
    if(som>=s) return 0;
    if(memo[som][dado]!=-1) return memo[som][dado];

    int ans = 0;
    for(int i=1; i<=f; i++) ans+=dp(som+i, dado+1);

    return memo[som][dado]=ans;
}

int main(){
    cin>>n;

    for(int i = 0; i<n; i++){
        memset(memo, -1, sizeof memo);
        cin>>s>>d>>f;
        long double sai = (dp(0, 0)*1.0);
        sai /= pow(f,d);
        cout<<fixed<<setprecision(f)<<sai<<endl;
    }
    return 0;
}