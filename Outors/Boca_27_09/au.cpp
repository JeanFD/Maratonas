#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long a = 1;
    for(int i=1; i<50;i++){
        a = a * (long long) i;
        printf("%d - %030lld\n",i, a);
    }
    return 0;
}