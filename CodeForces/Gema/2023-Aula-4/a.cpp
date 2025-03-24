#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans = 5, resp;
    int l=1, r=10, meio;
    while(true){
        meio = (r+l)/2;
        printf("%d\n", meio);
        fflush(stdout);
        scanf("%d", &resp);

        if(resp==2) {
            cout<<meio<<endl;
            return 0;
        }else if(resp==1){
            l=meio+1;
        }else{
            r=meio-1;
        }
    }
    return 0;
}