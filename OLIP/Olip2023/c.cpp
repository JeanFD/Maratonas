#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    double p = (a+b+c)/2.0;
    double h = (sqrt(p*(p-a)*(p-b)*(p-c)));
    cout<<fixed<<setprecision(3)<<h<<" m2\n";
    return 0;
}