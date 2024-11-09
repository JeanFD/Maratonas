#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int vet[10], ans[10];
    rep(i, 0, 10) cin>>vet[i];
    int q=0, n; cin>>n;


    rep(i, 0, 10){
        if(vet[i]==n){
            ans[q]=i;
            q++;
        }
    }

    if(q==0) cout<<"Mia x"<<endl;
    else {
        cout<<q<<endl;
        rep(i, 0, q-1) cout<<ans[i]<<" ";
        cout<<ans[q-1]<<endl;
    }

    return 0;
}