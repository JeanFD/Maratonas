#include <bits/stdc++.h>
#define _ sync_with_stdio(0); cin.tie(0);
#define endl "\n"

#define rep(i, a, b) for(int i = a; i<b; i++)

using namespace std;

int main(){
    int N;
    cin>>N;
    int vet[N];
    rep(i, 0, N){
        cin>>vet[i];
    }

    int qtd=0, p1=0;

    rep(i, 1, N){
        if(vet[p1]==vet[i]) continue;
        qtd = max(qtd, i-p1);
        p1=i;
    }
    qtd = max(qtd, N-p1);
    cout<<qtd<<endl;
    
    return 0;
}