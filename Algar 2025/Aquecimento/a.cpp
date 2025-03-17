#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define d(x) cout<<#x<<": "<<x<<endl;

typedef long long int ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;

int main(){ _
    // freopen("in.txt", "r", stdin);
    // cout<<"-----------------APAGA O FREOPEN-----------------"<<endl;
    // freopen("out.txt","w", stdout);

    int n, aux; cin>>n;
    int vet[4]={0,0,0,0};
    while(n--){
        cin>>aux;
        vet[aux-1]++;
    }

    cout<<"Jovem: "<<vet[1]<<endl;
    cout<<"Adulta: "<<vet[0]<<endl;
    cout<<"Idosa: "<<vet[1]<<endl;




    

    return 0;
}
