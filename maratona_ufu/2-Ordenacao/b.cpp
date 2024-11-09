#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > coor;

int distanciaQuadrada(pair<int, int> p){
    return p.first * p.first + p.second * p.second;
}

bool f(pair<int, int> a, pair<int, int> b){
    return distanciaQuadrada(a) < distanciaQuadrada(b);
}

int main(){
    int N; cin>>N;
    int a, b;
    while(N--){
        cin>>a>>b;
        coor.push_back(make_pair(a, b));

    }
    sort(coor.begin(), coor.end(), f);

    for(int i=0; i<coor.size(); i++){
        cout<<coor[i].first<<" "<<coor[i].second<<endl;
    }
    return 0;
}