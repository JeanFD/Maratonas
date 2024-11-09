#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N;
    double a, b, c;
    bool f;
    for(int i=0; i<N; i++){
        f=false;
        cin>>a>>b>>c;
        if(a*10>b*10&&a*10<c*10) f = true;
        if(f) cout<<"True"<<endl;
        else cout<<"False"<<endl;
    }
}