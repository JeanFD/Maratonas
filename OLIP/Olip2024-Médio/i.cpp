#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e7+7;
int ehprimo[MAX];

void primos(){
    for(int i=2; i<MAX; i++) ehprimo[i]=1;
    int max = sqrt(MAX);
    for(int i=2; i<max; i++){
        if(ehprimo[i]==1) for(int j=i*i; j<MAX; j=j+i){
            ehprimo[j]=0;
        }
    }
}

int main(){
    primos();
    for(int i=2; i<MAX; i++) ehprimo[i] += ehprimo[i-1];
    int n; cin>>n;
    int a, b;
    while(n--){
        cin>>a>>b;
        cout<<ehprimo[b]-ehprimo[a-1]<<endl;
    }
    return 0;
}