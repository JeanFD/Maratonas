#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;

    string hello = "hello";
    int j=0;
    for(int i=0; i<(int)a.size(); i++){
        if(a[i] == hello[j]){
            j++;
        }
    }
    cout<<(j==5?"YES":"NO")<<endl;

}