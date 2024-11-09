#include<bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {
    int N; cin>>N;
    int t, i, a;
    int tenho, ans;
    while(N--){
        cin>>t>>i>>a;
        tenho=i;
        ans = 1;
        while(t > tenho){
            tenho += i + ans * a;
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
timelimit