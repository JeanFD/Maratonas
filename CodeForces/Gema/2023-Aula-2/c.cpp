#include <bits/stdc++.h>
using namespace std;

#define MAX 1010

void abre(){
    freopen("teste.in", "r", stdin);
    cout<<"////////////////////////// FREOPEN \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
}

int main(){
    int N; cin>>N;
    vector<int> dias(MAX, 0);
    string ent;
    cin.ignore();
    for(int i=0; i<N; i++){
        getline(cin, ent);
        dias[ent.size()]++;
    }

    int maior=0;

    for(int i=1; i<MAX; i++){
        if(dias[maior]<=dias[i]) maior=i;
    }

    cout<<maior<<endl;

    return 0;
}