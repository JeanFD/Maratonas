#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Função para verificar se é possível conseguir pelo menos c moedas com o intervalo k
bool pode(ll k, ll d, ll c, vector<ll>& soma) {
    ll grupo = k + 1;
    ll total = 0;

    ll grupos_cheios = d / grupo;
    ll resto = d % grupo;

    if (grupo <= soma.size()) total += soma[grupo - 1] * grupos_cheios;
    else total += soma.back() * grupos_cheios;

    if (resto > 0) {
        if (resto <= soma.size()) total += soma[resto - 1];
        else total += soma.back();
    }

    return total >= c;
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        ll n, c, d;
        cin >> n >> c >> d;

        vector<ll> vet(n), soma(n);

        for(int i = 0; i < n; i++) {
            cin >> vet[i];
        }

        sort(vet.rbegin(), vet.rend()); // Ordena em ordem decrescente

        soma[0] = vet[0];
        for(int i = 1; i < n; i++) soma[i] = soma[i - 1] + vet[i];

        if(soma[min(d - 1, n - 1)] >= c) {
            cout << "Infinity" << endl;
        } else if(vet[0] * d < c) {
            cout << "Impossible" << endl;
        } else {
            ll l = 0, r = d, ans = 0;
            while(l <= r) {
                ll mid = (l + r) / 2;
                if(pode(mid, d, c, soma)) {
                    ans = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            cout << ans << endl;
        }
    }
}
