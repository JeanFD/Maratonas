//Passou durante o contest

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){_
    string ent;
    cin >> ent;
    bool car = false, mai = false, min = false, num = false;
    int nume = ent.size();
    if(nume>=8) car = true;
        for(int i=0; i<nume; i++){
            if(int(ent[i])>64&&int(ent[i]<91)) mai = true;
            else if(int(ent[i])>96&&int(ent[i]<123)) min = true;
            else if(int(ent[i])>47&&int(ent[i]<58)) num = true;
        }
    
    if(car&&mai&&min&&num) cout<<"senha valida"<<endl;
    else{
        if(!car) cout<<"minimo de 8 caracteres"<<endl;
        if(!mai) cout<<"letra maiuscula"<<endl;
        if(!min) cout<<"letra minuscula"<<endl;
        if(!num) cout<<"numero"<<endl; 
    }

}