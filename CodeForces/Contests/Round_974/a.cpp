#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, a;

    int qtdr, ans;
    cin>>t;

    while(t--){
        cin>>n>>k;
        qtdr = 0, ans=0;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a==0&&qtdr>0) ans++, qtdr--;
            if(a>=k) qtdr+=a;
        }

        cout<<ans<<endl;
    }
    return 0;
}