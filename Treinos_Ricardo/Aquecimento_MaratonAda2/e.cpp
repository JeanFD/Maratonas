#include <bits/stdc++.h>
using namespace std;

int main(){
    double ent;
    string ans;
    while(scanf("%lf", &ent)==1){
        ans = "";
        if(ent==360||ent<90) ans+="Bom Dia!!";
        else if(ent<180) ans+="Boa Tarde!!";
        else if(ent<270) ans+="Boa Noite!!";
        else ans+="De Madrugada!!";

        int min = (int)(ent * 4 + 360);
        int hora = (min/60)%24;
        min = min%60;
        printf("%s\n%02d:%02d:00\n", ans.c_str(), hora, min);
    }

    return 0;
}