#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;

    string ans;

    cin>>t;

    while(t--){
        cin>>n>>k;
        if(k%2==0) ans=((k/2)%2==0)? "YES": "NO";
        else{
            if(((k-1)/2)%2==0) ans=(n%2==0)? "YES":"NO";
            else ans=(n%2!=0)? "YES":"NO";
        } 
        // for(int i=n-k+1; i<=n; i++){
        //     //cout<<i<<"--";
        //     if(i%2!=0) ans++;
        // }
        cout<<ans<<endl;
    }
    return 0;
}