#include <bits/stdc++.h>
using namespace std;
int c, f;

int memo[51][1003], tam[1003], des[1003];

int dp(int pos, int peso){
    if(pos==f) return 0;
    if(peso==0) return 0;

    if(memo[pos][peso] != -1) return memo[pos][peso];

    int naoPegar = (dp(pos+1, peso));
    int pegar = 0;

    if(peso-tam[pos]>=0) pegar = dp(pos+1, peso-tam[pos])+des[pos];

    return memo[pos][peso] = max(pegar, naoPegar);
}

int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int n, d;
    int cont = 0;
    while(cin>>c>>f && (c+f)){
        memset (memo, -1, sizeof memo);
        memset (tam, 0, sizeof tam);
        memset (des, 0, sizeof des);
        for(int i=0; i<f; i++){
            cin>>n>>d;
            tam[i]=n;
            des[i]=d;
        }
        cout<<"Teste "<<++cont<<endl;
        cout<<dp(0, c)<<endl<<endl;
} 
    return 0;
}