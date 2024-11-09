#include<bits/stdc++.h>
using namespace std;

using namespace std;

class Participante {
public:
    string nome;
    int idade;

    Participante(string _nome, int _idade) : nome(_nome), idade(_idade) {}

    // Operador de comparação para ordenação
    bool operator<(const Participante& outro) const {
        if (idade == outro.idade) {
            return nome < outro.nome;
        }
        return idade > outro.idade;
    }
};

int main() {
    int N;
    cin >> N;

    vector<Participante> participantes;

    for (int i = 0; i < N; ++i) {
        string nome;
        int idade;
        cin.ignore(); // Ignora a quebra de linha pendente
        getline(cin, nome, ',');
        cin >> idade;

        participantes.emplace_back(nome, idade);
    }

    // Ordena a lista de participantes
    sort(participantes.begin(), participantes.end());

    // Imprime a lista ordenada
    for (const auto& participante : participantes) {
        cout << participante.nome << endl;
    }

    return 0;
}