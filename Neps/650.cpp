#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, aux=0, id=0;
    int u, v;
    int vet[10010], dp[10010], opt[10010];
    while(cin>>n, n){
        aux++;
        for(int i=0; i<n; i++){
            cin>>u>>v;
            vet[i]=u-v; 
        }

        int ans=0;
        dp[0]=vet[0];
        opt[0]=0;
        for(int i=1; i<n; i++){
            if(dp[i-1]+vet[i]<vet[i]) opt[i]=i;
            else opt[i]=opt[i-1];
            dp[i]=max(dp[i-1]+vet[i], vet[i]);
            if(ans<=dp[i]) ans=dp[i], id=i;
        }

        

        cout<<"Teste "<<aux<<endl;
        if(ans==0) cout<<"nenhum"<<endl;
        else cout<<opt[id]+1<<" "<<id+1<<endl;
        cout<<endl;

    }
    return 0;
}