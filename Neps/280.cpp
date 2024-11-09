#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin>>n;
    bool f = true;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            f = false;
            break;
        }
    }
    if(f&&n!=1) cout<<'S'<<endl;
    else cout<<'N'<<endl;
    return 0;
}