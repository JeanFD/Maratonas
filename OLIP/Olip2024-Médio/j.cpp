#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, P;
    cin>>A>>P;
    int g, t;
    g = A*2;
    g -= P/2;
    t = A-g;
    cout<<t<<endl<<g<<endl;
    return 0;
}