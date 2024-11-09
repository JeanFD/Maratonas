#include <bits/stdc++.h>
#define d(x) cout<<#x<<" = "<<x<<endl;
#define rep(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n, m; cin>>n>>m;
    int vet[n+1][10];
    memset(vet, 0, sizeof vet);
    int aux;
    for(int i=1; i<=n; i++){
        cin>>aux;
        if(i!=0) for(int j=0; j<10; j++) vet[i][j]=vet[i-1][j];
        vet[i][aux]++;
    }

    int ult = -1;
    int ans[10];
    memset(ans, 0, sizeof ans);
    for(int i=0; i<m; i++){
        cin>>aux;
        if(ult!=-1){
            if(aux>ult) for(int j=0; j<10; j++) ans[j] += vet[aux-1][j]-vet[ult-1][j];
            else for(int j=0; j<10; j++) ans[j] += vet[ult][j]-vet[aux][j];
        }
        ult=aux;
    }

    for(int j=0; j<10; j++) ans[j] += vet[aux][j]-vet[aux-1][j];
    bool ie = false;
    for(int j=0; j<10; j++){
        if(ie) cout<<" ";
        ie=true;
        cout<<ans[j];
    }
    cout<<endl;
    return 0;
}