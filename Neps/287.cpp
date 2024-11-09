#include <bits/stdc++.h>
using namespace std;
int n;
void merge(int l, int r, int *vet){
    int meio = (l+r)/2;
    int aux[n], i=0;
    
    int p1=l;
    int p2=meio+1;

    while(p1<=meio&&p2<=r){
        if(vet[p1]>=vet[p2]) {
            aux[i]=vet[p1];
            p1++;
        }
        else {
            aux[i]=vet[p2];
            p2++;
        }
        i++;
    }

    while(p1<=meio) {
        aux[i]=vet[p1];
        p1++;
        i++;
    }

    while(p2<=r){
        aux[i]=vet[p2];
        p2++;
        i++;
    }

    for(int i=0; i<=(r-l); i++){
        vet[l+i]=aux[i];
    }
}

void mergesort(int l, int r, int* vet){
    if(l<r){
        int meio = (r+l)/2;
        mergesort(l, meio, vet);
        mergesort(meio+1, r, vet);
        merge(l, r, vet);
    }
}

int main(){
    cin>>n;
    int vet[n];
    for(int i=0; i<n; i++) cin>>vet[i];
    mergesort(0, n-1, vet);
    for(int i=0; i<n; i++) cout<<vet[i]<<" ";
}