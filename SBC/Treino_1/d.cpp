#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, n, ent; 
    cin>>a;
    while(a--){
        cin>>n;
        unordered_map<int, int> mapa;
        for(int i=0; i<n; i++) {
            cin>>ent;
            mapa[ent] = i;
        }
        int ans = -1;
        for(int i=1000; i>=0; i--){
            if(mapa.count(i)==0)continue;
            for(int j=i; j>=0; j--){
                if(mapa.count(j)==0)continue;
                if(__gcd(i, j)==1){
                    ans = max(ans, mapa[i]+mapa[j]+2);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}