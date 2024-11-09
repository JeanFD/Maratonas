#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(1);
    long double m, s;
    cin>>m>>s;
    m += s/60.0;
    long double ritmo = (m/10.0);
    cout<<ritmo<<endl;
    cout<<ritmo*21<<endl;

}