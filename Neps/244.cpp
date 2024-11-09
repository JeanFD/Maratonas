#include <bits/stdc++.h>
using namespace std;
int main(){
    int vet[6]={100, 50, 25, 10, 5, 1};
    int v; cin>>v;

    int ans = 0;
    for(int i=0; i<6; i++){
        ans+=v/vet[i];
        v-=vet[i]*(v/vet[i]);
    }
    cout<<ans<<endl;
    return 0;
}