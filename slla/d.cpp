#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;

int main(){ _
    int n; cin>>n;

    int vet[n];
    for(auto &i: vet) cin>>i;
    int alt = 0;
    for(int i=n-1; i>=0; i--){
        alt++;
        alt=max(vet[i]+2, alt);
    }
    cout<<alt<<endl;
    return 0;
}