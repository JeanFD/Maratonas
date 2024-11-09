#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string ent;
    while(cin>>n && n){
        int ans = 0;
        cin>>ent;
        for(int i=0; i<(int)ent.size(); i++) {
            if(ent[i]=='D') ans+=1;
            else ans -= 1;

            if(ans>3) ans=0;
            if(ans<0) ans=3;
        }
        switch (ans)
        {
        case 0:
            cout<<"N\n";
            break;
        case 1:
            cout<<"L\n";
            break;
        case 2:
            cout<<"S\n";
            break;
        case 3:
            cout<<"O\n";
            break;
        }
    }
    return 0;
}