#include <bits/stdc++.h>
using namespace std;

int main(){
    string RNA;
    int cont, i;

    while(cin >> RNA){
        cont = i = 0;

        while(i < RNA.size() - 1 && RNA.size() > 0){
            if((RNA[i] == 'B' && RNA[i+1] == 'S') || (RNA[i] == 'S' && RNA[i+1] == 'B') || 
               (RNA[i] == 'F' && RNA[i+1] == 'C') || (RNA[i] == 'C' && RNA[i+1] == 'F')){
                RNA.erase(RNA.begin()+i, RNA.begin()+(i+2));
                cont++;
                if (i > 0) i--; // Volta para verificar combinações anteriores
            } else {
                i++;
            }
        }

        cout << cont << endl;
    }

    return 0;
}
