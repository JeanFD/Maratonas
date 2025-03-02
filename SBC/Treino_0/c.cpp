#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    vector<int> b;
    for(int i=0; i<a.size(); i+=2){
        b.push_back(a[i]-'0');
    }
    sort(b.begin(), b.end());

    for(int i=0; i<b.size(); i++){
        if(i) cout<<'+';
        cout<<b[i];
    }
}