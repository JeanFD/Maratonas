#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin>>m>>n;

    char matriz[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matriz[i][j];
        }
    }
    pair<int, int> por[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int ans=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matriz[i][j]=='#'){
                bool flag = false;
                for(auto [x, y] : por){
                    if(i+x>=0 && i+x<m && j+y>=0 && j+y<n ){
                        if(matriz[i+x][j+y]=='.') flag = true;
                    }else flag = true;
                }
                if(flag) ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}