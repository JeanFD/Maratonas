#include <bits/stdc++.h>
#define d(x) cout<<#x<<" = "<<x<<endl;
using namespace std;

int main(){
    string a, b;
    cin>>a>>b;
    int ans=0, aux1, aux2;
    for(int i=0; i<(int)a.size(); i++){
        aux1 = min((a[i]-'a')-(b[i]-'a'), (b[i]-'a')-(a[i]-'a'));
        aux2 = max((a[i]-'a')-(b[i]-'a'), (b[i]-'a')-(a[i]-'a'));
        if(aux1<0) aux1+=26;
        ans+=min(aux1, aux2);
    }
    cout<<ans<<endl;
    return 0;
}