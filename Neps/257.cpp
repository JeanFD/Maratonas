#include <bits/stdc++.h>
using namespace std;

int dp[31];

int fat(int a){
    if(dp[a]!=0) return dp[a];
    if(a==0||a==1) return 1;
    return dp[a] = fat(a-1)+fat(a-2);
}

int main(){
    int n; cin>>n;
    cout<<fat(n)<<endl;
}