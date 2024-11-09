#include<bits/stdc++.h>
using namespace std;
string naipes[] = {"Paus", "Ouro", "Coração", "Espada"};

string cartas[] = {"ÀS", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Valete", "Dama", "Rei"};

int main() {
    int a, b;
    cin>>a>>b;

    cout<<cartas[b-1]<<" de "<<naipes[a]<<endl;

    return 0;
}