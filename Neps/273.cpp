#include <bits/stdc++.h>
using namespace std;
int main(){
    int c, n; cin>>c>>n;
    
    if (c >= n) {
        cout<<0<<"\n";
        return 0;
    }
    
    priority_queue<int, vector<int>, greater<int>> pq;
    int t, d;
    for(int i=0; i<c; i++){
        cin>>t>>d;
        pq.push(t+d);
    }
    int topo, ans = 0;
    for(int i=c; i<n; i++){
        cin>>t>>d;
        topo = pq.top();
        pq.pop();
        if((topo-t)>20)ans++;
        pq.push(max(topo,t)+d);
    }
    cout<<ans<<endl;

    return 0;
}