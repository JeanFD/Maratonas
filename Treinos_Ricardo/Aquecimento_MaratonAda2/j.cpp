#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    cin.ignore();
    int a, b;
    while(n--){
        cin>>a;
        cin.ignore();
        cin>>b;
        if(a!=b)
            for(int i=5; i<=10; i++)
                cout<<a<<" x "<<i<<" = "<<a*i<<" && "<<b<<" x "<<i<<" = "<<b*i<<endl;
        else for(int i=5; i<=10; i++) cout<<a<<" x "<<i<<" = "<<a*i<<endl;
    }
    return 0;
}