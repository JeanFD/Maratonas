#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, p, f, d; //1 p/ horario -1 p/ anti-horario
    cin>>h>>p>>f>>d;

    if(d==1) {
        while(true){
            f=f+1;
            if(f==16)f=0;
            if(f==h){
                cout<<"S"<<endl;
                break;
            }
            if(f==p){
                cout<<"N"<<endl;
                break;
            }
        }
    } else {
        while(true){
            f=f-1;
            if(f==-1)f=15;
            if(f==h){
                cout<<"S"<<endl;
                break;
            }
            if(f==p){
                cout<<"N"<<endl;
                break;
            }
        }
    }
    return 0;
}