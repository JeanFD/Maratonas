#include <bits/stdc++.h>
using namespace std;

int dist(int x1, int y1, int x2, int y2){
    return pow(x2-x1, 2) + pow(y2-y1, 2);
}

int main(){
    int N; cin>>N;
    long double x1, x2, x3, y1, y2, y3;

    while(N--){
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        if((x1==x2&&y1==y2)||(x1==x3&&y1==y3)||(x3==x2&&y3==y2)){
            cout<<"nao"<<endl;
        }else{

            int dis1 = dist(x1, y1, x2, y2);
            int dis2 = dist(x2, y2, x3, y3);
            int dis3 = dist(x3, y3, x1, y1);

            if(dis1==dis2+dis3||dis2==dis3+dis1||dis3==dis1+dis2) cout<<"sim"<<endl;
            else cout<<"nao"<<endl;
        } 
    }
    return 0;
}