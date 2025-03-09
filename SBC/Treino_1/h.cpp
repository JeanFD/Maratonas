#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    while(n--){
        bool R=false;
        for(int i=0; i<8; i++){
            cin>>s;
            if(s=="RRRRRRRR") R = true;
        }
        cout<<(R?"R":"B")<<endl;
    }
}