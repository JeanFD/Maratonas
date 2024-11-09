#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000010;
int ehprimo[MAX];



void primos(){
    for(int i=1; i<MAX; i++) ehprimo[i]=1;
    int max= sqrt(MAX);
    for(int i=2; i<max; i++){
        if(ehprimo[i]==1)
        for(int j=i*i; j<MAX; j=j+i){
            ehprimo[j]=0;
        }
    }
}

int main(){
    int a, b; cin>>a>>b;
    primos();
    bool prim = true;
    for(int i=a; i<=b; i++){
        if(ehprimo[i]) {
            if(prim){
                cout<<i;
                prim=false;
            }else{
                cout<<" "<<i;
            }
        }
    }
    cout<<endl;
}