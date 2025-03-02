#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, C, M, aux;
    cin>>N>>C>>M;
    set<int> carimbadas;
    for(int i=0; i<C; i++){
        cin>>aux;
        carimbadas.insert(aux);
    }

    int ans = 0;

    for(int  i = 0; i<M; i++){
        cin>>aux;
        if(carimbadas.find(aux) != carimbadas.end()){
            carimbadas.erase(aux);
        }
    }

    cout<<(int)carimbadas.size()<<endl;
    return 0;
}