#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b;
    long long ans=0;
    unordered_map<int, vector<int>> ruas;

    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>a>>b;
        ruas[a].push_back(b);
    }

    for(auto& [rua, casas] : ruas){
        sort(casas.begin(), casas.end());

        int meio = (casas.size() / 2);

        for(int i=0; i<(int)casas.size(); i++) ans+=abs(casas[meio]-casas[i]);
    }
    
    cout<<ans<<endl;
    return 0;
}