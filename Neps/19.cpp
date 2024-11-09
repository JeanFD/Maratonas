#include <bits/stdc++.h>
using namespace std;
map<int, pair<int, int>> tam;

int main(){
    int n; cin>>n;

    int num;
    char lado;
    for(int i=0; i<n; i++){
        cin>>num>>lado;
        if(lado=='D') tam[num].second++;
        else tam[num].first++;
    }

    int ans=0;

    for(int i=30; i<61; i++) ans+=min(tam[i].first ,tam[i].second);
    cout<<ans<<endl;
    return 0;
}