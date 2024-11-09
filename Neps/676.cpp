#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    long long vet[n];
    for(int i=0; i<n;i++){
        cin>>vet[i];
    }
    cout<<max(vet[n-1]*vet[n-2]*vet[n-3], vet[0]*vet[1]*vet[n-1])<<endl;
    return 0;
}