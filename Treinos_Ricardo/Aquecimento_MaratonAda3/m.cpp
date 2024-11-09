#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ent; cin>>n;
    while(n--) {
        cin>>ent;
        ent>8000 ? (cout<<"Mais de 8000!"<<endl):(cout<<"Inseto!"<<endl);
    }
    return 0;
}