#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> dic;

int main(){
    int n, s, ent;
    long long ans=0;  
    cin>>n>>s;

    for(int i=0; i<n; i++){
        cin>>ent;
        ans+=dic[s-ent];
        dic[ent]++;
    }

    cout<<ans<<endl;
    return 0;
}