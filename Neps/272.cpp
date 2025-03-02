#include <bits/stdc++.h>
#define _ sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define rep(i, a, b) for(int i = a; i<b; i++)

using namespace std;

int main(){
    string N;
    cin>>N;

    int somaI=0, somaP=0;

    for(int i=0; i<(int)N.size(); i++){
        if(i%2==0) somaP+=N[i]-'0';
        else somaI+=N[i]-'0';
    }

    cout<<(abs(somaP-somaI)%11==0?"S":"N")<<endl;

    return 0;
}