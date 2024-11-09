#include <iostream>

using namespace std;

int soma_vetor(int n, int v[]){
    int som = 0;
    for(int i=0; i<n; i++){
        som+=v[i];
    }
    return som;
}

int main(){
	
	int n, v[100100];
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << soma_vetor(n,v) << "\n";
}