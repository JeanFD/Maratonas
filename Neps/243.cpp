#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> &a, vector<int> &b){
    if(a[0]!=b[0]) return a[0]>b[0];
    if(a[1]!=b[1]) return a[1]>b[1];
    if(a[2]!=b[2]) return a[2]>b[2];
    return a[3]<b[3];
}

int main(){
    int n, m;
    cin>>n>>m;
    
    vector<vector<int>> a(n, vector<int>(4, 0));
    for(int i=0; i<n; i++) a[i][3]=i+1;
    
    int O, P, B;
    for(int i=0; i<m; i++){
        cin>>O>>P>>B;
        a[O-1][0]++;
        a[P-1][1]++;
        a[B-1][2]++;
    }
    
    sort(a.begin(), a.end(), f);
    

    for(int i=0; i<n; i++){
        if(i) cout<<" ";
        cout<<a[i][3];
    }

    return 0;
}