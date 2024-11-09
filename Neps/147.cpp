#include <bits/stdc++.h>
#define _ sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define rep(i, a, b) for(int i = a; i<=b; i++)

using namespace std;

int main(){
    int n1, n2; cin>>n1>>n2;

    double r = double(n1*2+n2*3)/5.0;

    if(r>=7) cout<<"Aprovado"<<endl;
    else if(r>=3) cout<<"Final"<<endl;
    else cout<<"Reprovado"<<endl;

    return 0;
}