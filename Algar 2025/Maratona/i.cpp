#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define d(x) cout<<#x<<": "<<x<<endl;

#define pb push_back
#define pf push_front
#define mp make_pair
#define f first
#define s second

typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    // freopen("in.txt", "r", stdin);
    // cout<<"--------------------APAGA O FREOPEN--------------------"<<endl;
    // freopen("out.txt", "w", stdout);

    int n; cin>>n;
    char op;
    string st;
    set<string> comp;
    int tinha=0, nao=0;
    for(int i=0; i<n; i++){
        cin>>op>>st;
        if(op=='*')tinha++;
        else nao++;
        comp.insert(st);
    }

    for(auto i : comp){
        cout<<i<<endl;
    }
    cout<<"Tinha no mercado: "<<tinha<<" - Nao tinha no mercado: "<<nao<<endl;

    return 0;
}
