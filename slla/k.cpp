// #include <bits/stdc++.h>
// #define _ ios_base::sync_with_stdio(0); cin.tie(0);
// #define endl '\n'
// using namespace std;
// const int tam = 1e9+9;
// // int memo[tam];

// int dp(int n){
//     // if(memo[n]!=-1) return memo[n];
//     if(n==0) return 1;
//     if(n==1) return 2;

//     return (dp(n-1)*dp(n-2))%998244353;
// }

// int main(){ _
// // memset(memo, -1, sizeof memo);
//     long long int n; cin>>n;
//     cout<<dp(n)<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;

const long long MOD = 998244353;

struct Matrix {
    long long m[2][2];
};

// Função para multiplicar duas matrizes 2x2
Matrix multiply(Matrix a, Matrix b) {
    Matrix res;
    res.m[0][0] = (a.m[0][0] * b.m[0][0] + a.m[0][1] * b.m[1][0]) % MOD;
    res.m[0][1] = (a.m[0][0] * b.m[0][1] + a.m[0][1] * b.m[1][1]) % MOD;
    res.m[1][0] = (a.m[1][0] * b.m[0][0] + a.m[1][1] * b.m[1][0]) % MOD;
    res.m[1][1] = (a.m[1][0] * b.m[0][1] + a.m[1][1] * b.m[1][1]) % MOD;
    return res;
}

// Função para elevar a matriz à potência n usando exponenciação rápida
Matrix power(Matrix base, long long exp) {
    Matrix res = {{{1, 0}, {0, 1}}};  // Matriz identidade
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = multiply(res, base);
        }
        base = multiply(base, base);
        exp /= 2;
    }
    return res;
}

long long kosmos(long long N) {
    if (N == 0) return 1;
    if (N == 1) return 2;

    Matrix base = {{{1, 1}, {1, 0}}};
    Matrix result = power(base, N - 1);

    // F(N) será result.m[0][0] * 2 + result.m[0][1] * 1
    return (result.m[0][0] * 2 + result.m[0][1]) % MOD;
}

int main() {
    long long N;
    cin >> N;
    cout << kosmos(N) << endl;
    return 0;
}
