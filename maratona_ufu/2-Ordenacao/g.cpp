#include<bits/stdc++.h>
using namespace std;

vector<int> cartas;

int main() {
    int ent;
    while(cin>>ent){
        cartas.push_back(ent);
    }

    sort(cartas.begin(), cartas.end());
    char aux;
    
    for(int i = 0 ; i < cartas.size(); i++) {
        if(i>0) cout<<" ";
        switch (cartas[i]){
        case 1: cout<<'A';
            break;
        case 11: cout<<'J';
            break;
        case 12: cout<<'Q';
            break;
        case 13: cout<<'K';
            break;
        default: cout<<cartas[i];
        }

    }
        cout<<endl;

    return 0;
}