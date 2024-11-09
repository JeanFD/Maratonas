#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<long long, vector<long long>, greater<>> pq;
    int n; cin>>n;
    int ent; 
    for(int i=0; i<n; i++) {
        cin>>ent;
        pq.push(ent);
    }

    long long ans = 0, aux;
    while(pq.size()>1){
        aux= pq.top();
        pq.pop();
        aux+= pq.top();
        pq.pop();
        ans+=aux;
        pq.push(aux);
    }   
    cout<<ans<<endl;
}