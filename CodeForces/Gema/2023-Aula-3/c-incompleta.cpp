#include <bits/stdc++.h>
using namespace std;
int vet[21], ans=0, n, x;

void din(int pos, int valor){
    if(pos==n) return;
    if(valor+vet[pos]==x) ans++;
    
    din(pos+1, valor+vet[pos]);
    din(pos+1, valor);
}

int main(){
    cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>vet[i];
        }
        din(0, 0);

        cout<<ans<<endl;
}