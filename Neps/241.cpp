#include <bits/stdc++.h>
#define rep(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n; cin>>n;
    int ent[n], sai[n];
    rep(i, 0, n){
        cin>>ent[i];
    }
    sai[0] = ent[0]+ent[1];
    sai[n-1] = ent[n-1]+ent[n-2];
    rep(i, 1, n-1){
        sai[i] = ent[i]+ent[i-1]+ent[i+1];
    }
    rep(i, 0, n){
        cout<<sai[i]<<endl;
    }
    return 0;
}