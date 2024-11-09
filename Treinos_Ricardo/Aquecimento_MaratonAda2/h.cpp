#include <bits/stdc++.h>
using namespace std;

int numeros[110];

int main(){
    int n;
    cin >> n;
    int grid1[3][3], grid2[3][3],  grid3[3][3],  grid4[3][3];
    bool chave = 0;
    while(n--){
        memset(numeros, 0, sizeof numeros);
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                cin >> grid1[i][j];
        grid2[0][0] = abs(grid1[0][0] - grid1[0][1]);
        grid2[0][1] = grid2[0][0];
        grid2[0][2] = abs(grid1[0][1] - grid1[0][2]);
        grid2[1][0] = abs(grid1[1][0] - grid1[1][1]);
        grid2[1][1] = grid2[1][0];
        grid2[1][2] = abs(grid1[1][1] - grid1[1][2]);
        grid2[2][0] = abs(grid1[2][0] - grid1[2][1]);
        grid2[2][1] = grid2[2][0];
        grid2[2][2] = abs(grid1[2][1] - grid1[2][2]);

        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                numeros[grid2[i][j]]++;
        
        int maior = 0;

        for(int i=0; i<110; i++) if(numeros[i]>numeros[maior]) maior = i;

          grid3[0][0] = abs(grid1[0][0] - grid1[0][1]);
        grid3[0][1] = abs(grid1[0][1] - grid1[0][2]);
        grid3[0][2] = abs(grid1[0][2] - grid1[0][0]);
        grid3[1][0] = abs(grid1[1][0] - grid1[1][1]);
        grid3[1][1] = abs(grid1[1][1] - grid1[1][2]);
        grid3[1][2] = abs(grid1[1][2] - grid1[1][0]);
        grid3[2][0] = abs(grid1[2][0] - grid1[2][1]);
        grid3[2][1] = abs(grid1[2][1] - grid1[2][2]);
        grid3[2][2] = abs(grid1[2][2] - grid1[2][0]);
        grid4[0][0] = abs(grid1[0][0] - grid1[0][2]);
        grid4[0][1] = abs(grid1[0][1] - grid1[0][0]);
        grid4[0][2] = abs(grid1[0][2] - grid1[0][1]);
        grid4[1][0] = abs(grid1[1][0] - grid1[1][2]);
        grid4[1][1] = abs(grid1[1][1] - grid1[1][0]);
        grid4[1][2] = abs(grid1[1][2] - grid1[1][1]);
        grid4[2][0] = abs(grid1[2][0] - grid1[2][2]);
        grid4[2][1] = abs(grid1[2][1] - grid1[2][0]);
        grid4[2][2] = abs(grid1[2][2] - grid1[2][1]);

        bool t = true;
        cout<<"Possiveis maletas: ";

        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                if(grid3[i][j]!=maior&&grid4[i][j]!=maior){
                    if(t){
                        cout<<grid1[i][j];
                        t=false;
                    }else{
                        cout<<", "<<grid1[i][j];
                    }
                }
                cout<<";"<<endl;
    }

    return 0;
}