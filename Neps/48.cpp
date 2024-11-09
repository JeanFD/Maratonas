#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int som=0, aux, ans;
    bool achou=false;
    for(int i=0; i<n; i++){
        cin>>aux;
        som+=aux;
        if(som>=1000000&&!achou) {
            achou=true;
            ans=i;
        }
    }

       cout<<ans+1<<endl;

    
    return 0;
}