#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0; 
    cin>>n;
    vector<int> vet(n);
    for(auto & i: vet) cin>>i;
    sort(vet.begin(), vet.end());
    for(int i=n-1; i>0; i-=2) ans+=vet[i];
    cout<<ans<<endl;
    return 0;
}