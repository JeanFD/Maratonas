#include<bits/stdc++.h>

using namespace std;

vector<int> num;

int main() {

    int N; cin>>N;
    int ent;
    while(N--){
        cin>>ent;
        num.push_back(ent);
    }

    sort(num.begin(), num.end());

    cout<<num[num.size()-1]-num[0]<<endl;

    return 0;
}