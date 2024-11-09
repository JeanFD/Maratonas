#include <bits/stdc++.h>
using namespace std;

int main(){
    int t1, t2, t3;

    cin>>t1>>t2>>t3;

    int r1, r2, r3;

    if(t1<t2&&t1<t3) r1 = 1;
    else if(t1<t2||t1<t3) r2 = 1;
    else r3=1;
    
    if(t2<t3&&t2<t1) r1 = 2;
    else if(t2<t3||t2<t1) r2 = 2;
    else r3=2;

    if(t3<t1&&t3<t2) r1 = 3;
    else if(t3<t1||t3<t2) r2 = 3;
    else r3=3;

    cout<<r1<<endl<<r2<<endl<<r3<<endl;

    return 0;
}