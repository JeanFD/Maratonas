#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1, a2, a3; cin>>a1>>a2>>a3;
    cout<<min((a2+(a3*2))*2, min((a1+a3)*2, ((a1*2)+a2)*2))<<endl;
    return 0;
}