#include <bits/stdc++.h>
using namespace std;

int main(){

    int N; cin>>N;
    string ent;
    cin.ignore();
    while(N--){
        getline(cin, ent);
        for(int i=0;i<ent.size(); i++) if(ent[i]>64&&ent[i]<91||ent[i]>96&&ent[i]<123) ent[i]=ent[i]+3;
        reverse(ent.begin(), ent.end());
        for(int i=(ent.size()/2);i<ent.size(); i++) ent[i]=ent[i]-1;
        cout<<ent<<endl;
    }

    return 0;
}