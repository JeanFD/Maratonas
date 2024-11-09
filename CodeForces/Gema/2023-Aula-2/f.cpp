// dois elevado, a sequencia segue 2 4 8 6
    // long long ru=1, ra=1;

    // int ans;
    // if(k==1)ans=1;
    // else ans=0;

    // for(int i=1; i<n; i++){
    //     cout<<ra<<" "<<ru<<endl;
    //     ra=ru+1;
    //     if(ra%10==k) ans++; 
    //     ru+=ra;
    // }
    
    // cout<<ans<<endl;

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k; cin>>n>>k;

    long long ans, resto;
    if(k==1) cout<<"1"<<endl;
    else if(k%2==0&&k!=0){
        ans=(n-1)/4;
        resto=(n-1)%4;
        if(k==2&&resto>0) ans++;
        else if(k==4&&resto>1) ans++;
        else if(k==8&&resto>2) ans++;
        else if(k==6&&resto>3) ans++;
        cout<<ans<<endl;
    }else cout<<"0"<<endl;


    return 0;
}