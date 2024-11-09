#include <bits/stdc++.h>
using namespace std;
const int MAXM = 1e5+5, MAXN = 1e3+3;

int v, m;
int vet[MAXN], dp[MAXM];

int main(){

    cin>>v>>m;

    for(int i=0; i<m; i++) cin>>vet[i];
    dp[0] = 1;
    for(int i=0; i<m; i++) {
        for(int j=v-vet[i]; j>=0; j--){
            if(dp[j]==true) dp[j+vet[i]]=true;
        }
    } 

    if(dp[v])cout<<'S'<<endl;
    else cout<<'N'<<endl;
    return 0;
}