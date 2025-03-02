#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cont=0;
    string s;
    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++){
        getline(cin,s);
        for(int i=0; i<=(int)s.size(); i++){
            if(s[i]=='{') cont++;
            if(s[i]=='}') cont--;
            if (cont < 0) {
                cout << "N\n";
                return 0;
            }
        }
    }
    if(cont==0) cout<<"S";
    else cout<<"N";
    cout<<"\n";
    return 0;
}