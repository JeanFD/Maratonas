#include <bits/stdc++.h>
#define d(x) cout<<#x<<" = "<<x<<endl;

using namespace std;

int main() {
    int E, V;
    cin >> E >> V;

    int horas = 19 + (E / V); 
    int minutos = (E % V) * 60 / V; 
    horas %= 24;
    horas += minutos/60;
    minutos = minutos%60;
    // Saída formatada
    cout << setfill('0') << setw(2) << horas << ":" << setw(2) << minutos << endl;

    return 0;
}