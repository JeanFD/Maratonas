#include <bits/stdc++.h>
using namespace std;

int main(){
    int p; cin>>p;
    int x, y;
    if((p+1)%2!=0){
        cout<<"0"<<endl;
        return 0;
    }
    x = (p+1)/2;
    y=x-1;
    cout<<"1"<<endl<<x<<" "<<y<<endl;

    return 0;
}