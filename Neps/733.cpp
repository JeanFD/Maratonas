#include <stdio.h>

struct Inimigo {    
    int id;
    int x; 
    int y;
    bool vivo;

    //É necessário ter um construtor sem parâmetros para criar o vetor na função principal
    Inimigo(){
        id = -1;
        x = -1; 
        y = -1;
        vivo = false;
    }

    //TODO: Crie um construtor que inicializa um inimigo usando os parâmetros abaixo.
    Inimigo(int ID, int X, int Y, bool VIVO){
        id = ID;
        x = X;
        y = Y;
        vivo = VIVO;
    }

    //TODO: Método que muda a o status do inimigo de vivo para morto caso seja acertado pelo lazer na posição (X,Y).
    void foi_acertado(int X, int Y){ 
        if(X==x&&Y==y){
            vivo=false;
        }       
    }

};

int main(){

    int N; //Quantidade de Inimigos
    scanf("%d", &N); 

    Inimigo inimigo[N];

    for(int id=0;id<N;id++){
        int x, y;
        scanf("%d %d", &x, &y);

        inimigo[id] = Inimigo(id, x, y, true);
    }

    int M; //Quantidade de Inimigos
    scanf("%d", &M); 

    for(int i=0;i<M;i++){
        int x, y;
        scanf("%d %d", &x, &y);

        for(int id=0;id<N;id++){
            inimigo[id].foi_acertado(x,y);
        }
    }

    bool prim = true;
    for(int id=0;id<N;id++){
        if(!inimigo[id].vivo){
            if(prim) {
                printf("%d", id);
                prim=false;
            }else printf(" %d", id);
        }
    }

    printf("\n");

    //TODO: Crie um laço for que imprime o id de todos os inimigos que foram acertados.
}