#include <bits/stdc++.h>
using namespace std;

bool f(pair<int, int> &a, pair<int, int> &b){
    return a.second<b.second;
}

int main(){
    int n, ans=0;
    cin>>n;

    vector<pair<int, int>> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i].first>>a[i].second;
    }

    sort(a.begin(), a.end(), f);
    
    int aux = -1;
    for(int i=0; i<n; i++){
        if(aux==-1) aux=a[i].second, ans++;
        else if(a[i].first>=aux) aux=a[i].second, ans++;
    }
    cout<<ans<<"\n";
}