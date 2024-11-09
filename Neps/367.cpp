//R = valor total da compra
//K = qtd de produtos
//inteiros distintos

//preco pode ser de 1 até r
//se chegar em r encerra
//se somar r encerra tbm;

#include <bits/stdc++.h>
#define _ sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define rep(i, a, b) for(int i = a; i<b; i++)
#define d(x) cout<<#x<<" - "<<x<<endl;

using namespace std;

int r, k, ans=0;

// int memo[101][21][101];

long long backtracking(int itemA, int qtdE, int vt){
    // if(memo[itemA][qtdE][vt]!=-1) return memo[itemA][qtdE][vt];
    
    if((itemA==0||vt>r)){
        if(qtdE==k&&vt==r) return 1; 
        return 0;
    }
    return backtracking(itemA-1, qtdE+1, vt+itemA) + backtracking(itemA-1, qtdE, vt);
}

int main(){
    cin>>r>>k;
    // memset(memo, -1, sizeof memo);
    cout<<backtracking(r,0,0)<<endl;
    return 0;
}