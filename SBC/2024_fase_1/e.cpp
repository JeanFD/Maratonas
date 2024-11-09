#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int vet[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>vet[i][j];
    
    int ans = min(min(vet[0][0], vet[0][n-1]), min(vet[n-1][0], vet[n-1][n-1]));
    cout<<ans;
    if(vet[0][0]==ans)ans = 0;
    else if(vet[n-1][0]==ans) ans = 3;
    else if(vet[n-1][n-1]==ans) ans = 2;
    else ans = 0;

    cout<<ans<<endl;

    return 0;
}