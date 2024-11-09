#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;



int main(){ _
    int n; cin>>n;
    int vet[n];
    for(int i=0; i<n; i++) cin>>vet[i];
    int ans=1, val=0, g=0;

    for(int i=0; i<n; i++) {
        if(val+(vet[i]|g)>val+g+vet[i]){
            g=vet[i]|g;
        }else{
            cout<<i<<": "<<vet[i]<<" "<<(vet[i]|g)<<endl;
            ans++;
            val+=g;
            g=vet[i];
        }
    }

    val+=g;

    cout<<ans<<" "<< val<<endl;
    return 0;
}