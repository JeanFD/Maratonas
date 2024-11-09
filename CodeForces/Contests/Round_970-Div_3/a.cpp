#include <bits/stdc++.h>
#define d(x) cout<<#x<<" = "<<x<<endl;
using namespace std;

int main(){
    int t, a, b;
    int aux;
    cin>>t;
    while(t--){
        aux=0;
        cin>>a>>b;
        aux = b%2;
        a-=aux*2;

        cout<<((a%2==0&&a>=0)?"YES":"NO")<<endl;
    }
    return 0;
}