#include <bits/stdc++.h>
#define d(x) cout<<#x<<" = "<<x<<endl;
using namespace std;
int n, d, ans;
int vet[1000010], pre[1000010], suf[1000010];

int main(){
    cin>>n>>d;
    for(int i=0; i<n; i++) cin>>vet[i];

    pre[0]=vet[0];
    for(int i=1; i<n; i++) pre[i]+=pre[i-1]+vet[i];

    suf[n-1] = vet[n-1];
    for(int i=n-2; i>=0; i--) suf[i]+=suf[i+1]+vet[i];
    sort(suf, suf+n);
    int l = 0, r = 0;
    int som=vet[0];
    
    while(l<n){
        while(r<n&&som+vet[r]<=d){
            som+=vet[r];
            r++;
        }
        if(som==d) ans++;
        som-=vet[l];
        l++;
    }

    l = 0;
    for(int l=0; l<n; l++){
        if(*lower_bound(suf, suf+n, d-pre[l])+pre[l]==d) ans++;
    }

    cout<<ans<<endl;

    return 0;
}