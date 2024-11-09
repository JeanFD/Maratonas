#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, c; cin>>l>>c;
    int ans1 = c*l+(c-1)*(l-1);
    int ans2 = (c-1)*2+(l-1)*2;
    cout<<ans1<<endl<<ans2<<endl;

    return 0;
}