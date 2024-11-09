#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int som=0, aux;
    for(int i=0; i<n; i++){
        cin>>aux;
        som+=aux;
    }

    cout<<som<<endl;
}