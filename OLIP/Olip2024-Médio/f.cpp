#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, K;
    cin>>N>>M;
    int vet[N][M];
    for(int i=0; i<N; i++) for(int j=0; j<M; j++) cin>>vet[i][j];
    cin>>K;

    long long maior = 0, aux;

    for(int i=0; i<N; i++){
        for(int j=0; j<=M-K; j++){
            aux=0;
            for(int k=0; k<K; k++) aux=(long long)(aux*10)+(long long)vet[i][j+k];
            maior=max(aux, maior);
        }    
    }

     for(int i=0; i<=N-K; i++){
        for(int j=0; j<=M-K; j++){
            aux=0;
            for(int k=0; k<K; k++){
                aux=(long long)(aux*10)+(long long)vet[i+k][j+k];
                maior=max(aux, maior);
            }
        }
     }
    cout<<maior<<endl;

    return 0;
}