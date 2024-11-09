#include <bits/stdc++.h>
#define d(x) cout<<#x<<" = "<<x<<endl;
using namespace std;

int n, m;
int moedas[1010];
int dp[1010][1010];

int ans(int valor, int pos){

    if(valor==0) {
        return dp[valor][pos]=1;
    }
    if(pos>=n||valor<0) return 0;
    
    if(dp[valor][pos]!=-1) return dp[valor][pos];
    
    return dp[valor][pos] = ans(valor-moedas[pos], pos+1)+ans(valor-moedas[pos], pos)+ans(valor, pos+1);
}

int main(){
    memset(dp, -1, sizeof dp);
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>moedas[i];
    if(ans(m, 0)!=0) cout<<'S'<<endl;
    else cout<<'N'<<endl;
    return 0;
}