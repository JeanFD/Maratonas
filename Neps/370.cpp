#include <bits/stdc++.h>
using namespace std;

int dp[10010];

int ans(int tam){
    if(dp[tam]!=-1) return dp[tam];

    if(tam<0) return 0;
    if(tam==0||tam==1) return 1;
    if(tam==2) return 5;

    unsigned long long qtd = 0;
    qtd+=(unsigned long long)1*ans(tam-1);
    qtd+=(unsigned long long)2*ans(tam-3);
    qtd+=(unsigned long long)4*ans(tam-2);
    return dp[tam]=qtd%1000000007;
}

int main(){
    memset(dp, -1, sizeof dp);
    int n; cin>>n;
    cout<<ans(n)<<endl;
    return 0;
}