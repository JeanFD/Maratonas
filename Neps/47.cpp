#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> seq(n);
    for(int& i: seq) cin>>i;
    int cont = 0;
    for(int i = 0; i<n; i++){
        if(i+1<n, i+2<n){
            if(seq[i]==1&&seq[i+1]==0&&seq[i+2]==0) cont++;
        }
    }
    cout<<cont<<endl;
    return 0;
}