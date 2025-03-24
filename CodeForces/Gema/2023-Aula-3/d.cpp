#include <bits/stdc++.h>
using namespace std;
int n;
int memo[51][51];

int dp(int mul, int som){
    if(som==n) return 1;
    if(mul>n||som>n) return 0;    
    if(memo[mul][som]) return memo[mul][som];

    int ans = 0;
    for(int i=mul; i<=n; i++){
        if(i%mul==0){
            ans+=dp(i, som+i);
        }
    }

    return memo[mul][som] = ans;
}

int main(){
    int ans=0;
    cin>>n;
    cout<<dp(1, 0)<<endl;
    // for(int i=0; i<n; i++) ans+=dp(i, 0);
    return 0;
}