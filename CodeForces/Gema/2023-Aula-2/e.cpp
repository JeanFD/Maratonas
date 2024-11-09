#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N;
    cin.ignore();
    string ent; cin>>ent;
    int ans = 0;
    for(int i=0; i<N/2; i++){
        if(ent[i]!=ent[N-1-i])ans++;
    }

    cout<<ans<<endl;
}