#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define d(x) cout<<#x<<" = "<<x<<endl;

void abrir(){
    freopen("ent.txt", "r", stdin);
    cout<<"|||||||||||||||||||||||||||FREOPEN FREOPEN|||||||||||||||||||||||||||"<<endl;  
}

int main(){ 
    // abrir();

    int t; cin>>t;
    int n;
    while(t--){
        cin>>n;
        int ul = n/28;
        // d(ul)
        if(n < 29) cout<<"aa"<<(char)('a'+(n-3))<<endl;
        else if(n < 54) cout<<"a"<<(char)('a'+(n-28))<<"z"<<endl;
        else cout<<(char)('a'+(n-53))<<"zz"<<endl;
    }
    
    return 0;
}