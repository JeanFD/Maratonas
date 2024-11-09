#include <bits/stdc++.h>
using namespace std;

int n, t;
int i, j;
int lados[2][100010], aux[100010];

int main(){
    cin>>n>>t;
    for(int i=0; i<n; i++) cin>>lados[0][i];
    for(int i=0; i<n; i++) cin>>lados[1][i];

    while(t--){
        cin>>i>>j;
        aux[i-1]=(aux[i-1]+1)%2;
        aux[j]=(aux[j]+1)%2;
    }
    int lado=0;
    bool esp = false;
    for(int i=0; i<n; i++) {
        lado=(lado+aux[i])%2;
        if(esp) cout<<" ";
        esp=true;
        cout<<lados[lado][i];
    }
    cout<<endl;
    return 0;
}