// no maximo 2 arq por pasta
// soma menor que bytes
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b;
    cin>>n>>b;
    int vet[n];
    for(int i=0; i<n; i++) cin>>vet[i];

    sort(vet, vet+n);

    int aux, ans=0, l=0, r=n-1;
    while(l<=r){
        aux = vet[l]+vet[r];
        // if(l==r) ans++;
        if(aux>b) {
            ans++;
            r--;
        }
        else {
            ans++;
            l++;
            r--;
        }
    }

    cout<<ans<<endl;

    return 0;
}