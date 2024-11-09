#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l; cin>>n>>l;

    int vet[n];
    for(int &i:vet) cin>>i;

    sort(vet, vet+n, greater());

    int ans = 0;

    for(int i: vet){
        if(l>=100-i){
            ans++;
            l-=100-i;
        }
    }

    cout<<ans<<endl;
    return 0;
}