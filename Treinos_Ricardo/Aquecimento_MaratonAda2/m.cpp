#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, z, l;
    cin>>h>>z>>l;

    if((h>z&&h<l)||(h>l&&h<z)) cout<<"huguinho"<<endl;
    else if((z>h&&z<l)||(z>l&&z<h)) cout<<"zezinho"<<endl;
    else cout<<"luisinho"<<endl;

    return 0;
}