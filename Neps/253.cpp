#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, t; cin>>n>>t;
    priority_queue<pair<int, string>> pq;
    string na;
    int h;
    for(int i=0; i<n; i++) {
        cin>>na>>h;
        pq.push(make_pair(h,na));
    } 
    vector<string> times[t];
    for(int i=0, aux=0; i<n; i++){
        times[aux%t].push_back(pq.top().second);
        aux++;
        pq.pop();
    }

    for(int i=0; i<t; i++){
        cout<<"Time "<<i+1<<endl;
        sort(times[i].begin(), times[i].end());
        for(int j=0; j<(int)times[i].size(); j++){
            cout<<times[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}