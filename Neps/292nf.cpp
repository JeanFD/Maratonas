#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    string aux;

    while(cin>>n>>d && (n+d)){
        deque<char> pilha;
        cin.ignore();
        cin>>aux;
        int apagados = 0;

        for(int i=0; i<n; i++){
            while((!pilha.empty()) and apagados < d and aux[i]>pilha.back()){
                pilha.pop_back();
                apagados++;
            }
            if((int)pilha.size()<(n-d)) pilha.push_back(aux[i]);
        }
        for(int i=0; i<(int)pilha.size(); i++) cout<<pilha[i];
        cout<<endl;
    }
    return 0;
}
// #include <cstdio>

// #define MAX 100100

// int main(){
	
// 	// variáveis que vou usar
// 	char pilha[MAX], num;
//     	int topo, n, d, apagados, i;
	
// 	// enquanto houver entrada
//     	while(scanf("%d%d", &n, &d) && (n+d)){
		
// 		// a quantidade de números apagados começa zero
//         	apagados = 0;
		
// 		// para cada algarismo do número
//         	for(i = 0, topo = -1; i < n; i++){
			
// 			// leio seu valor
// 	        	scanf(" %c", &num);
			
// 			// enquanto houver algum número na pilha, ainda não houver d apagados
// 			// e o algarismo atual for maior que o topo da pilha
//             		while(topo > -1 && apagados < d && num > pilha[topo]){
				
// 				// apago o número que está no topo da pilha
// 				topo--;
				
// 				// e aumento a quantidade de números apagados
// 				apagados++;
// 			}
			
// 			// se o tamanho da pilha for menor que n-d
// 			// insiro o  novo número na pilha
//             		if(topo+1 < n-d) pilha[++topo] = num;
//         	}
		
// 		// por fim, adiciono '\0' ao fim da pilha
// 	        pilha[++topo] = '\0';
        
// 		// para imprimi-la só com um printf
// 		printf("%s\n", pilha);
//     	}
	
//     	return 0;
// }