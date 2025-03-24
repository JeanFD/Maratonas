#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    char s;
    cin>>t;
    while(t--){
        char maior = 'a';
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>s;
            if(s>maior) maior = s;
        }
        cout<<maior-'a'+1<<endl;
        
    }
    return 0;
}