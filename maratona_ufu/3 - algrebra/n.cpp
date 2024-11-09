#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<fixed<<setprecision(3);
    double x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    double distab = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout<<distab<<endl;
    return 0;
} 