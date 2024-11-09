#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;

int main(){ _
    int n, x; cin>>n>>x;
    int vet[n];
    vector<int> ans;

    for(int i=0; i<n; i++){
        cin>>vet[n];
        if(x%vet[n]==0)ans.push_back(i+1);
    }

    cout<<ans.size()<<endl;
    bool esp = false;
    for(auto i: ans){
        if(esp) cout<<" ";
        esp = true;
        cout<<i;
    }
    cout<<endl;
    return 0;
}