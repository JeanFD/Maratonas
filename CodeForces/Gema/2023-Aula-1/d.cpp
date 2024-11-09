#include <bits/stdc++.h>
using namespace std;

int main(){
    int v[3];
    cin>>v[0]>>v[1]>>v[2];

    sort(v, v+3);

    for(int i=2; i>=0; i--) cout<<v[i]<<endl;

    return 0;
}