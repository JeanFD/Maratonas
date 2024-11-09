#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z;
    cin>>x>>y>>z;

    if(z*z+y*y!=x*x) cout<<"Nao eh retangulo!"<<endl;
    else {
        double area = z*y/2.0 + (3.0*pow(z/2.0, 2))/2.0;
        cout<<"AREA = "<<(int)area<<endl;
    }
    return 0;
}