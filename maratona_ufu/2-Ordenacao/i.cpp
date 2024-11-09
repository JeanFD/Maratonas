// #include <bits/stdc++.h>
// using namespace std;

// map<string, int> abc;
// vector<string> resp;

// int main() {
//     string ent;
//     getline(cin, ent);
//     int ult=0;
//     for(int i=0; i<ent.size(); i++){
//         if(ent[i]==' '){
//             abc[ent.substr(ult, i-ult)]=1;
//             ult = i+1;
//         }
//     }

//     getline(cin, ent);
//     ult=0;
//     for(int i=0; i<ent.size(); i++){
//         if(ent[i]==' '){
//             resp.push_back(ent.substr(ult, i-ult));
//             cout<<ent.substr(ult, i-ult)<<endl;
//             ult = i+1;

//         }
//     }
// a
//     sort(resp.begin(), resp.end());

//     for(int i=0; i<resp.size(); i++){
//         if(abc[resp[i]]==1) cout<<resp[i]<<" Está mapeado"<<endl;
//         else cout<<resp[i]<<" Não está mapeado"<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> mapeados;

    // Lê os locais mapeados até o final do arquivo (EOF)
    int local;
    while (std::cin >> local) {
        mapeados.push_back(local);
    }

    std::sort(mapeados.begin(), mapeados.end());

    int consultas;

    // Lê as consultas até o final do arquivo (EOF)
    while (std::cin >> consultas) {
        auto it = std::lower_bound(mapeados.begin(), mapeados.end(), consultas);

        if (it != mapeados.end() && *it == consultas) {
            std::cout << consultas << " Está mapeado" << std::endl;
        } else {
            std::cout << consultas << " Não está mapeado" << std::endl;
        }
    }

    return 0;
}
