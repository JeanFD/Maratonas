#include <bits/stdc++.h>
using namespace std;

string pi(int a){
    if(a%2==0) return "Bino";
    return "Cino";
}

int main(){
    int b, c; cin>>b>>c;
    cout<<pi(b+c)<<endl;
}