#include <bits/stdc++.h>
using namespace std;

unsigned long long power(unsigned long long base, unsigned long long exp) {
    unsigned long long res = 1;
    for (unsigned long long i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

int find(unsigned long long a){
    for(unsigned long long i=1; i<=20; i++){
        //cout<<pow(i,i)<<endl;
        if(power(i,i)==a) return i;
    }
    return -1;
}

int main(){
    unsigned long long a;
    cin>>a;
    cout<<find(a)<<endl;
    return 0;
}