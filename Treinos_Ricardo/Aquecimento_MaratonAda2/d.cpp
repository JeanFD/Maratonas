#include <bits/stdc++.h>
using namespace std;

int main(){
    int ent;
    string ans;
    while(cin>>ent){
        ans = "";
        if(ent==360||ent<90) ans+="Bom Dia!!";
        else if(ent<180) ans+="Boa Tarde!!";
        else if(ent<270) ans+="Boa Noite!!";
        else ans+="De Madrugada!!";

        cout<<ans<<endl;
    }

    return 0;
}