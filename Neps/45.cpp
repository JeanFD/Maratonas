#include <bits/stdc++.h>
using namespace std;
int m[1001][1001], linha[1001], coluna[1001];

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++){
        cin>>m[i][j];
        linha[i]+=m[i][j];
    }

    for(int i=0; i<n; i++) for(int j=0; j<n; j++){
        coluna[i]+=m[j][i];
    }

    int ans = 0;

    for(int i=0; i<n; i++) for(int j=0; j<n; j++){
        ans = max(ans, linha[i]+coluna[j]-(m[i][j]*2));
    }

    cout<<ans<<endl;

    return 0;
}