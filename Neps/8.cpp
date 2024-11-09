#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, vet[3];
    cin>>n;
    for(int i=0; i<3; i++) cin>>vet[i];

    sort(vet, vet+3);

    int ans = 0;

    for(int i=0; i<3; i++) if(n-vet[i]>=0) {
        ans++;
        n-=vet[i];
    }

    cout<<ans<<endl;

    return 0;
}