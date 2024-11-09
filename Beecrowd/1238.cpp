#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N;
    string a, b, resp;
    while(N--){
        cin>>a; cin>>b;
        resp = "";
        for(int i=0; i<min(a.size(), b.size()); i++){
            resp+=a[i];
            resp+=b[i];
        }
        if(a.size()>b.size()) for(int i=b.size(); i<a.size(); i++) resp+=a[i];
        else for(int i=a.size(); i<b.size(); i++) resp+=b[i];

        cout<<resp<<endl;
        
    }
    return 0;
}