include <bits/stdc++.h>
using namespace std;

int main(){
    int N, L, C; // N de palavras, max de linhas por pag e mac de caracteres por linha
    string ent;

    int ultEsp, qtdlin=0;
    while(cin>>N>>L>>C){
        cin.ignore();
        getline(cin, ent);
        for(int i = 0; i<ent.size(); i++){
            if(ent[i+1]==' ') ultEsp = i;
            if(i%C==0) {
                qtdlin++;
                i = ultEsp;
            }
        }

        cout<<qtdlin/L<<endl;

    }

    return 0;
}