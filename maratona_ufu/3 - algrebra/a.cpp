#include <bits/stdc++.h>
using namespace std;

int main(){
    int fib[45];
    fib[0] = 1;
    fib[1] = 1;
    int N; cin>>N;
    for(int i = 2; i<N; i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    cout<<fib[N-1]<<endl;

    return 0;
}