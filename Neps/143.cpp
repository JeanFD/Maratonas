#include <bits/stdc++.h>
using namespace std;

int main(){
    int c;
    cin>>c;
    int ans=0;

    int ansV[6], moedas[6] = {100, 50, 25, 10, 5, 1};

    for(int i=0; i<6; i++){
        ansV[i]=c/moedas[i];
        c%=moedas[i];
        ans+=ansV[i];
    }

    cout<<ans<<"\n";
    for(auto i : ansV) cout<<i<<"\n";
}