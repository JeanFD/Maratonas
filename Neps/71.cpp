#include <bits/stdc++.h>
using namespace std;
int s, n[6];

int memo[6][5001];
int nota[6] = {2, 5, 10, 20, 50, 100};

int dp(int pos, int peso){
    if(peso==0) return 1;
    if(pos==6) return 0;

    if(memo[pos][peso] != -1) return memo[pos][peso];
    // cout<<"nota "<<endl;

    int ans=0;
    for(int i=n[pos]; i>=0; i--) if(peso-(i*nota[pos])>=0){
        ans+=dp(pos+1, peso-(i*nota[pos]));
    }
    return memo[pos][peso] = ans;
}

int main(){

    cin>>s;
    memset(memo, -1, sizeof memo);
    for(int &i: n) cin>>i;

    cout<<dp(0, s)<<endl;
    return 0;
}