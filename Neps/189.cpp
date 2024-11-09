#include <bits/stdc++.h>
using namespace std;
int vet[10];

int main(){
    int n; cin>>n;
    string aux;
    while(n--){
        cin>>aux;
        for(int i=0; i<(int)aux.size(); i++) vet[(aux[i]-'0')]++;
    }

    for(int i=0; i<10; i++) cout<<i<<" - "<<vet[i]<<endl;
    return 0;
}