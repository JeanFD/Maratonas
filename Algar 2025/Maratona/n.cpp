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

    int n, aux;
    cin>>n;
    priority_queue<int> dragoes;
    vector<int> prin;
    char t;
    for(int i=0; i<n-1; i++){
        cin>>t>>aux;
        if(t=='d') dragoes.push(-aux);
        else {
            while((int)dragoes.size()>=aux) dragoes.pop(); 
        }
    }
    cin>>t>>aux;
    int ans=0;
    int qtd = (int)dragoes.size();
    while((int)dragoes.size()>0){
        ans+=-dragoes.top();
        dragoes.pop();
    }
    if(qtd>=aux) cout<<ans<<endl;
    else cout<<"-1"<<endl;


    return 0;
}
