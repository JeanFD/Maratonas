#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

int main(){
    int n; cin>>n;
    char a[n], b[n];
    rep(i, 0, n) cin>>a[i];
    rep(i, 0, n) cin>>b[i];
    int cont = 0;
    rep(i, 0, n) if(a[i]==b[i]) cont++;
    cout<<cont<<endl;
}