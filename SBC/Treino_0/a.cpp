#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string palavra;
    for(int i=0; i<n; i++){
        cin>>palavra;
        if(palavra.size() > 10){
            cout<<palavra[0]<<palavra.size()-2<<palavra[palavra.size()-1]<<endl;
        }
        else{
            cout<<palavra<<endl;
        }
    }
}