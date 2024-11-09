#include <bits/stdc++.h>
using namespace std;
#define MAXN 212345

int main(){
    int t, n;
    int x, y;
    long long ans;
    short plano[MAXN][2];
    cin>>t;

    while(t--){
        cin>>n;
        ans=0;
        memset(plano, 0, sizeof(plano));
        for(int i=0; i<n; i++){
            cin>>x>>y;
            plano[x][y] = 1;
        }
        for(int i=0; i<=n; i++){
            if(plano[i][0]==1&&plano[i][1]==1) ans+=n-2;
            if(i<n-1){
                if(plano[i][0]==1&&plano[i+1][1]==1&&plano[i+2][0]==1) ans++;
                if(plano[i][1]==1&&plano[i+1][0]==1&&plano[i+2][1]==1) ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}