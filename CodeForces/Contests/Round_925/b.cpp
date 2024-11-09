#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define d(x) cout<<#x<<" = "<<x<<endl;

void abrir(){
    freopen("ent.txt", "r", stdin);
    cout<<"|||||||||||||||||||||||||||FREOPEN FREOPEN|||||||||||||||||||||||||||"<<endl;  
}

int main(){ _
    // abrir();

    int t, n; 
    cin>>t;
    while(t--){
        bool t = true;
        cin>>n;
        int vet[n], som=0;

        for(int i=0; i<n; i++){
            cin>>vet[i];
            som+=vet[i];
        }
        som/=n;
        int aux = 0;
        if(n!=1){
            for(int i=0; i<n; i++) {
                aux = aux+(vet[i]-som);
                if(aux<0) t= false;
            }
        }

        if(t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}