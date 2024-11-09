#include <bits/stdc++.h>
using namespace std;

#define MAXMN 301
char mat[MAXMN][MAXMN];

int movx[4] = {1, 0, -1, 0};
int movy[4] = {0, -1, 0, 1};
int M, N;

bool verpos(int x, int y){
    return(x>=0&&x<M&&y>=0&&y<N);
}

void bfs(int x, int y){
    mat[x][y]='#';

    for(int i=0; i<4; i++){
        int nx = x+movx[i];
        int ny = y+movy[i];
        if(verpos(nx, ny)){
            if(mat[nx][ny]=='F'){
                mat[nx][ny]='#';
                bfs(nx, ny);
            }
        }
    }
}

int main(){
    cin>>M>>N;
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin>>mat[i][j];
        }
    }

    int ans=0;
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            if(mat[i][j]=='F'){
                ans++;
                bfs(i, j);
            }             
        }
    }

    cout<<ans<<endl;

    return 0;
}