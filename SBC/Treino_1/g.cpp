#include <bits/stdc++.h>
using namespace std;

bool f(const int a, const int b) {
    return __builtin_popcount(a) > __builtin_popcount(b);
}

int main() {
    int t, aux;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> vet;
        vector<int> ans;
        vector<int> nums;

        int maior = 0;
        for (int i = 0; i < n; i++) {
            cin >> aux;
            vet[aux]++;
            if (vet[aux] == 1) {
                nums.push_back(aux);
            }
            if (aux > maior) {
                maior = aux;
            }
        }

        int teste = 0, bina = 0, num;
        while (!nums.empty()) {
            int melhor_idx = -1;
            bina = teste;

            // Escolher o número que maximiza o OR atual
            for (int i = 0; i < nums.size(); i++) {
                int novo_or = teste | nums[i];
                if (__builtin_popcount(novo_or) > __builtin_popcount(bina)) {
                    bina = novo_or;
                    melhor_idx = i;
                }
            }

            if (melhor_idx == -1) break; // Se não há melhorias, interrompe

            teste = bina;
            num = nums[melhor_idx];

            // Adiciona todas as ocorrências do número escolhido
            while (vet[num] > 0) {
                ans.push_back(num);
                vet[num]--;
            }

            // Remove o número processado
            nums.erase(nums.begin() + melhor_idx);
        }

        // Adiciona os números restantes em ordem decrescente
        vector<int> restantes;
        for (auto &it : vet) {
            while (it.second > 0) {
                restantes.push_back(it.first);
                it.second--;
            }
        }
        sort(restantes.rbegin(), restantes.rend()); // Ordena decrescente
        ans.insert(ans.end(), restantes.begin(), restantes.end());

        // Saída do resultado
        for (int i = 0; i < ans.size(); i++) {
            if (i) cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}
