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

int main(){

    string s;
    getline(cin, s);
    
    for(int i=0; i<(int)s.size(); i++){
        if (s[i] == 'r' && s[i + 1] == 'r') {
            s[i] = 'l';
            s.erase(i + 1, 1);
        }
        if(s[i]=='r'&&s[i+1]!=' '&&i!=(int)s.size()-1) s[i] = 'l';
    }
    cout<<s<<endl;


    return 0;
}
