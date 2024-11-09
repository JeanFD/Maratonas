#include <bits/stdc++.h>
using namespace std;

int main(){

    int N; cin>>N;
    bool prim = true;
    for(int i=N-1; i>1; i--) if(N%i==0) prim = false;

    if(prim) cout<<"sim"<<endl;
    else cout<<"nao"<<endl;

    return 0;
}