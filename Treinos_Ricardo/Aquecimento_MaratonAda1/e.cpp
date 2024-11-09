#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, c, x, y;
    cin>>a>>c>>x>>y;

    if(c-(x+y)>a) cout<<"Igor feliz!"<<endl;
    else{
        if(x>(y/2)) cout<<"Caio, a culpa eh sua!"<<endl;
        else cout<<"Igor bolado!"<<endl;
    }
}