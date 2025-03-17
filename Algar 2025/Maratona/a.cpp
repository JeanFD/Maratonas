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

    string ent, str;
    getline(cin, ent);

    set<string> pal;
    stringstream entrada(ent);

    while (entrada >> str) { 
        for( auto &c : str) c = tolower(c); 
        pal.insert(str);
    }

    cout<<pal.size()<<endl;
    return 0;
}

