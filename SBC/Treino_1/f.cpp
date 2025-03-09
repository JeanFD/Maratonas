#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, e;
    cin>>n;
    while(n--){
        bool ans = true;
        cin>>a;
        set<int> existe;
        for(int i=0; i<a; i++){
            cin>>e;
            if(existe.count(e)!=0) ans=false;
            existe.insert(e);
        }
        cout<<(ans? "YES":"NO")<<endl;
    }
    return 0;
}