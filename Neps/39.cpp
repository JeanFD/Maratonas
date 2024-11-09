#include <bits/stdc++.h>
using namespace std;
int n, k;
//qtd, seguidos
long long dp[1010][1010];

long long cont(int qtd, int seguidos){
    if(dp[qtd][seguidos]!=-1) return dp[qtd][seguidos]; 

    if(seguidos == k) return dp[qtd][seguidos] = 0;
    if(qtd==n) return dp[qtd][seguidos] = 1;

    return dp[qtd][seguidos] = (cont(qtd+1, seguidos+1) + cont(qtd+1, 0))%(1000000000+7);
}

int main(){
    memset(dp, -1, sizeof dp);
    cin>>n>>k;
    cout<<cont(0, 0)<<endl;
    return 0;
}