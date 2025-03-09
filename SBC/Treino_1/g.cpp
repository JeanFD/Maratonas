#include <Bits/stdc++.h>
using namespace std;
bool f (const int a, const int b){
    return __builtin_popcount(a)>__builtin_popcount(b);
}
int main(){
    int t; 
    cin>>t;
    cout<<__builtin_popcount(t)<<endl;
    int maior=  0;
    while(t--){
        int n;
        cin>>n;
        vector<int> vet(n);
        for(int i=0; i<n; i++){
            cin>>vet[i];
            if(__builtin_popcount(vet[i])>__builtin_popcount(vet[0])) swap(vet[0], vet[i]);
        }
        __mmc
        
        for(int i=0; i<n; i++){
            cout<<vet[i];
        }
    }
    return 0;
}