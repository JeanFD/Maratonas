#include <bits/stdc++.h>
using namespace std;
int vet[21], n, x;
int ans=0;

void dp(int pos, int valor){
    if(pos==n) return;
    if(valor+vet[pos]==x) ans++;
    
    dp(pos+1, valor+vet[pos]);
    dp(pos+1, valor);
}

int main(){
    cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>vet[i];
        }
        dp(0, 0);
        if(x==0)ans++;
        cout<<ans<<endl;
}