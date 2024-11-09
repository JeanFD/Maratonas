#include <bits/stdc++.h>

using namespace std;
    // <=5 - desconto 50%
    // >6 <18 - desconto 5%
    // 18 59 - pagam 10%
    // 60 ou mais - desconto 15%; 
int main(){
    cout<<fixed<<setprecision(2);

    long double a, resp, aux;
    int idade;
    cin>>a>>idade;

    if(idade<6) aux = (-0.5);
    else if(idade<18) aux = (-0.05);
    else if(idade<60) aux = (0.1);
    else aux = (-0.15);

    resp = a + (a*aux);
    cout<<resp<<endl;
    return 0;
}