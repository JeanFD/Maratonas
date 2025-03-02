#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int vet[n];
    set<int> s;
    for(int i=0; i<n; i++){
        cin>>vet[i];
        s.insert(vet[i]);
    }
    for(int i=0; i<n; i++){
        if(s.count(vet[i]+k)!=0){
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";
    return 0;
}