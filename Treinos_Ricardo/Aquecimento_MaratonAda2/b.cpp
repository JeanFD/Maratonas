#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<fixed<<setprecision(2);
    int n; cin>>n;
    cin.ignore();
    string ent;
    double temp;

    while(n--){
        getline(cin, ent);
        temp = ent.size()/100.0;
        cout<<temp<<endl;
    }

    return 0;
}