#include <bits/stdc++.h>
using namespace std;

int main(){
    int w1, w2, r;
    int cont = 0;
    double media=0;
    while(true){
        cin>>w1>>w2>>r;
        if(!(w1&&w2&&r)) break;
        cont++;
        double M = (w1*1.0+w2*1.0)/2.0*(1+((r*1.0)/30.0));
        media+=M;
        if(1<=M&&M<13) cout<<"Nao vai da nao"<<endl;
        else if(13<=M&&M<14) cout<<"E 13"<<endl;
        else if(14<=M&&M<40) cout<<"Bora, hora do show! BIIR!"<<endl;
        else if(40<=M&&M<60) cout<<"Ta saindo da jaula o monstro!"<<endl;
        else cout<<"AQUI E BODYBUILDER!!"<<endl;

    }

    if((media/cont*1.0)>40){
        cout<<endl;
        cout<<"Aqui nois constroi fibra rapaz! Nao e agua com musculo!"<<endl;
    }

    return 0;
}