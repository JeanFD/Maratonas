#include <bits/stdc++.h>
using namespace std;

void abre(){
    freopen("in.txt", "r", stdin);
}
123

int main() {
    string ent;
    int num, ans, r;
    while(cin>>ent){
        cin>>num;
        ans = 0, r=0;
        for(int i=0; i<ent.size(); i++){
            if(ent[i]=='R') {
                r++;
                if(r==1) ans++;
                else if(r==num)r=0; 
            } else {
                ans++;
                r=0;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
