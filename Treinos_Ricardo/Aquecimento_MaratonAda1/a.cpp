#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N;
    string nome; int forca;
    while(N--){
        cin>>nome>>forca;
        if(nome=="Thor") cout<<'Y'<<endl;
        else cout<<'N'<<endl;
    }
    return 0;
}