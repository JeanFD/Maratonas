#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f;

void abrir(){
    freopen("teste.in", "r", stdin);
    cout<<"FreOpen"<<endl;
}

int main(){
    int N; cin>>N;
    int ent, maior=0, menor = INF;
    while(N--){
        cin>>ent;
        maior=max(maior, ent);
        menor=min(menor, ent);
    }

    cout<<maior-menor<<endl;

    return 0;
}