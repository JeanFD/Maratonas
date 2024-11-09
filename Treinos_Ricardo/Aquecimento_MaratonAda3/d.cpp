#include <bits/stdc++.h>
using namespace std;

int main(){
    string chave; int tamchave;
    cin>>chave;
    tamchave = chave.size();

    int N;
    cin>>N;
    string ent;
    getline(cin, ent);
    
    while(N--){
        getline(cin, ent);
        int tam = ent.size();
        int aux = 0;
        int t=0;
        for(int i=0; i<tam; i++){
            if(t==0){
                if(ent[i]!='a' && ent[i]!='e' && ent[i]!='i' && ent[i]!='o' && ent[i]!='u') t=2;
                else t=1;
            }
            if(t==1) {
                if(ent[i]==' ') t = 0;
            }
            else if(t==2){
                if(ent[i]!=' ') {
                    ent[i] = 'a'+(((chave[aux%tamchave]-'a')+(ent[i])-'a')%26);
                    aux++;    
                }else{
                    t=0;
                }
            }
        }
        cout<<ent<<endl;
    }

    return 0;
}