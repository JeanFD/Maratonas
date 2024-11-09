#include <bits/stdc++.h>
#define d(x) cout<<#x<<" = "<<x<<endl;
using namespace std;

int n, m;
int moedas[1010];
int dp[1010][1010][11];

int ans(int valor, int pos, int qtd){

    if(valor==0&&qtd<10) {
        return dp[valor][pos][qtd]=1;
    }
    if(pos>=n||valor<0||qtd>=10) return 0;
    
    if(dp[valor][pos][qtd]!=-1) return dp[valor][pos][qtd];
    
    return dp[valor][pos][qtd] = ans(valor-moedas[pos], pos+1, qtd+1)+ans(valor-moedas[pos], pos, qtd+1)+ans(valor, pos+1, qtd);
}

int main(){
    memset(dp, -1, sizeof dp);
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>moedas[i];
    if(ans(m, 0, 0)!=0) cout<<'S'<<endl;
    else cout<<'N'<<endl;
    return 0;
}