#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    for(int fghij = 1234; fghij<98765/N; fghij++){      //max ~50K
        int abcde = fghij*N;
        int tmp, used=(fghij < 10000);              // flag if f =0
        tmp = abcde; while(tmp){used |= 1<<(tmp%10); tmp/=10;}
        tmp = fghij; while(tmp){used |= 1<<(tmp%10); tmp/=10;}

        if(used==(1<<10)-1)
            printf("%05d / %05d = %d\n", abcde, fghij, N);
    }
    return 0;
}