#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    
    vector<int> a(n), a_ordenado(n), vet_ans(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
        a_ordenado[i]=a[i];
    }
    
    sort(a_ordenado.begin(), a_ordenado.end());
    
    for(int i=0; i<n; i++){
        if(a[i]!=a_ordenado[i]){
              vet_ans[ans]=a_ordenado[i];
              ans++;
        }
    }
    
    cout<<ans<<"\n";
    for(int i=0; i<ans; i++){
        if(i) cout<<" ";
        cout<<vet_ans[i];
    }
    cout<<"\n";
}