#include <bits/stdc++.h>
using namespace std;

//transforma uma string representando um binario em int 
int binint (string a){
    int b=0;

    for(int j=0; j<(int)a.size(); j++){
        if(a[(int)a.size()-j-1]!='0'){
            b+=pow(2,j);
        }
    }
    return b;
}

string decimalParaBinario(int decimal, int tamanho) {
    string binario = "";
    
    while (decimal > 0) {
        binario = (decimal % 2 == 0 ? "0" : "1") + binario;
        decimal /= 2;
    }
    tamanho-=(int)binario.size();
    while(tamanho--) binario = "0" + binario;
    return binario;
}

int vet[32];
int em[16], en[16];//erros em m e erros em n
vector<int> v1, v2;

int main(){

    //le as entradas deixando n no padrao de 16 bits
    string M, N="0000000000000000";
    string aux;
    cin>>M>>aux;

    for(int i=0; i<(int)aux.size(); i++){
        N[15-i]=aux[(int)aux.size()-1-i];
    }

    //anotando erros em m
    int cem = 0; 
    for(int i=0; i<(int)M.size(); i++){
        if(M[i]=='*'){
            em[cem]=i;
            cem++;
        }
    }

    //anotando erros em n
    int cen = 0;
    for(int i=0; i<(int)N.size(); i++){
        if(N[i]=='*'){
            en[cen]=i;
            cen++;
        }
    }

    
    bitset<16> tentativas(0);
    int id=0;
    while(id<65536){
        bitset<16> tentativas(id);
        //cout<<tentativas<<endl;
        for(int i=0; i<cem;i++){
            M[em[i]] = '0'+tentativas[i];
        }
        v1.push_back(binint(M));
        // for(int i=1; i<=numero; i++){
        //     if(numero%i==0){
        //         bool ehdivi1 = true;
        //         bitset<16> divisor1(i);
                
        //         for(int j=0; j<(int)N.size(); j++){
        //             if('0'+divisor1[j]!=N[(int)N.size()-1-j]&&N[(int)N.size()-1-j]!='*'){
        //                 ehdivi1=false;
        //             }
        //         }

        //         if(ehdivi1){
        //             cout<<M<<endl;
        //             return 0;
        //         }
        //     }
        // }
        id++;
    }
    id=0;
    while(id<65536){
        bitset<16> tentativas(id);
        //cout<<tentativas<<endl;
        for(int i=0; i<cen;i++){
            N[en[i]] = '0'+tentativas[i];
        }
        v2.push_back(binint(N));

        id++;
    }

    int resultado = 0;
    for(auto i : v1) {
        for(auto j : v2) {
            if (j != 0 && (i % j == 0)) {
                resultado = i;
                break;
            }
        }
        if (resultado != 0) break;
    }

    cout << decimalParaBinario(resultado, (int)M.size()) << endl;

    return 0;
}