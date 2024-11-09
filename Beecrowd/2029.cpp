#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    cout<<fixed<<setprecision(2);
    double v, d;
    while(cin>>v>>d){
        double area = 3.14*pow(d/2.0, 2);
        double altura = v/area;
        cout<<"ALTURA = "<<altura<<endl;
        cout<<"AREA = "<<area<<endl;
    }
    return 0;
}