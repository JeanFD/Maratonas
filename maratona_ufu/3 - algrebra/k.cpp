#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N;
    int a, resp=0;
    while(N--){
        cin>>a;
        resp+= max(0, a-3);
    } 
    cout<<resp<<endl;
    return 0;
}