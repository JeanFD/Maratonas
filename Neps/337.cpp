#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans[31];
    ans[1]=1;
    for(int i=2; i<=31; i++){
        ans[i]=(ans[i-1]*2)+1;
    }
    int n, cont=1;
    while(cin>>n, n){
        cout<<"Teste "<<cont++<<"\n"<<ans[n]<<"\n\n";
    }
}