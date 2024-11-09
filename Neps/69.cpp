#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int x1, y1; cin>>x1>>y1;
    int x2, y2; cin>>x2>>y2;

    n/=2;
    if((x1<=n&&x2>n)||(x2<=n&&x1>n)||(y1<=n&&y2>n)||(y2<=n&&y1>n)) cout<<'S'<<endl;
    else cout<<'N'<<endl;

    return 0;
}