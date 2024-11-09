#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n; cin>>n;
    rep(i, 1, 11){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}