#include <bits/stdc++.h>
using namespace std;

unordered_map<int, pair<int, int> > brincos;

int main(){
    int N; //numero de brincos entregues
    int M; //codigo do brinco
    char L; //lado da orelha

    int lado, resp = 0;

    cin >> N;

    while(N--){
        cin >> M >> L;
        lado = (L=='D') ? 0 : 1;
        brincos[M].first += (lado==0);
        brincos[M].second += (lado==1);
    }

    for(auto brinco : brincos){
        resp += min(brinco.second.first, brinco.second.second);
    }

    cout << resp << endl;

    return 0;
}