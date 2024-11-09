#include <bits/stdc++.h>
using namespace std;

int fat(int a){
    if(a==0) return 1;
    return a*fat(a-1);
}

int main(){
    int n; cin>>n;
    cout<<fat(n)<<endl;
}