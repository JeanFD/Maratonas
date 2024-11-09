#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    queue<string> quartos;
    set<string> cria;

    for (int i = 0; i < N; ++i) {
        string quarto;
        cin >> quarto;
        quartos.push(quarto);
        cria.insert(quarto);
    }

    queue<string> ordem_irritacao;

    for (int i = 0; i < N; ++i) {
        string crianca;
        cin >> crianca;
        ordem_irritacao.push(crianca);
    }

    bool esp = false;

    for (int i = 0; i < N; ++i) {
        if(esp) cout<<" ";
        esp=true;
        cout<<ordem_irritacao.front();
        cria.erase(quartos.front());
        quartos.pop();
        while(cria.count(ordem_irritacao.front())==0&&!ordem_irritacao.empty()) ordem_irritacao.pop();
        
    }cout<<endl;

}