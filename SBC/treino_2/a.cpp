#include <bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin>>m;

    int aux = 0;
    vector<int> ans;
    int n=10;
    while(m>0){
        // cout<<n<<endl;
        if(pow(3,n)>m) n--;
        else {
            ans.push_back(n);
            m-=pow(3, n);
        }
    }
    cout<<(int)ans.size()<<endl;
    for(int i=0; i<(int)ans.size(); i++){
        if(i) cout<<" ";
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}