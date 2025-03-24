#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int vet[n], ord[n];
        int maior=0, segmaior=0;
        for(int i=0; i<n; i++){
            cin>>vet[i];
            if(vet[maior]<vet[i]) maior = i;
            ord[i] = vet[i];
        }
        sort(ord, ord+n);

        for(int i=0; i<n; i++){
            if(i) cout<<" ";
            if(maior == i) cout<<vet[i]-ord[n-2];
            else cout<<vet[i]-ord[n-1];
        }
        cout<<endl;
    }

}