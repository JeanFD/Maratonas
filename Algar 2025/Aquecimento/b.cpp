#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define d(x) cout<<#x<<": "<<x<<endl;

typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;

int main(){ _
    // freopen("in.txt", "r", stdin);
    // cout<<"-----------------APAGA O FREOPEN-----------------"<<endl;
    // freopen("out.txt","w", stdout);

    int n, aux; cin>>n;
    set<int> livros;
    for(int i=0; i<n; i++){
        cin>>aux;
        livros.insert(aux);
    }
    cout<<(int)livros.size()<<endl;
    

    return 0;
}
