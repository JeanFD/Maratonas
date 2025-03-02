#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main(){
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        xmin=INF , ymin=INF, xmax=-INF, ymax=-INF;
        int a, b;
        char c;
        for(int i=0; i<n; i++){
            cin>>a>>b>>c;
            if(c=='Y'){
                xmin = min(xmin, a);
                xmax = max(xmax, a);
                ymin = min(ymin, b);
                ymax = max(ymax, b);
            }
            
        }
    }
}