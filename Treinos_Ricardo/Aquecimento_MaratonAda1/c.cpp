#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<fixed<<setprecision(2);
    while(cin>>num){
        double menor = 100, ent;
        for(int i=0; i<num; i++){
            cin>>ent;
            if(ent<menor) menor = ent;
        }

        cout<<menor<<endl;
    }
    return 0;
}