#include<bits/stdc++.h>
using namespace std;
vector<int> par;
vector<int> impar;

int main() {

    int N; cin>>N;
    int ent;
    for(int i = 0; i < N; i++){
        cin>>ent;
        if(ent%2==0) par.push_back(ent);
        else impar.push_back(ent);
    }

    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end());

    bool prin = false;

    for(int i=0; i<impar.size(); i++){
        if(prin) cout<<" ";
        
        prin = true;

        cout<<impar[i];
    }
    for(int i=0; i<par.size(); i++) {
        if(prin) cout<<" ";
        
        prin = true;

        cout<<par[i];
    }

    cout<<endl;

    return 0;
}