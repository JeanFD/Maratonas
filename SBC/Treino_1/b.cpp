#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;

int main(){
    int n, a, b; 
    int maior = -INF, menor = INF;
    cin>>n;
    vector<pair<int, int>> vet(n);
    for(int i=0; i<n; i++){
        cin>>a>>b;
        vet[i]= {a, b};
        if(a<menor) menor = a;
        if(b>maior) maior = b;
    }
    int ans = -1;
    for(int i=0; i<n; i++){
        if(vet[i].first==menor&&vet[i].second==maior) ans=i+1;
    }
    cout<<ans<<endl;
    return 0;
}