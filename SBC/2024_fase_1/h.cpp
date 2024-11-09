#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

vector<string> v;
vector<int> v1, v2;

void gerarCombinacoes(string s, int b) {
    if (b == (int)s.size()) {
        v.push_back(s);
        return;
    }
    if (s[b] == '*') {
        s[b] = '0'; gerarCombinacoes(s, b + 1);
        s[b] = '1'; gerarCombinacoes(s, b + 1);
    } else
        gerarCombinacoes(s, b + 1);
}

int binarioParaDecimal(string binario) {
    int decimal = 0, base = 1;
    reverse(binario.begin(), binario.end());
    for (char c : binario) {
        if (c == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
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

int main() { _
    string s, d;
    cin >> s >> d;

    gerarCombinacoes(s, 0);
    for (auto &str : v) {
        int aux = binarioParaDecimal(str);
        v1.push_back(aux);
    }
    v.clear();

    gerarCombinacoes(d, 0);
    for (auto &str : v) {
        int aux = binarioParaDecimal(str);
        v2.push_back(aux);
    }
    v.clear();

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

    cout << decimalParaBinario(resultado, (int)s.size()) << endl;
}
