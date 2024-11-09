#include <bits/stdc++.h>
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;

int main(){ _
	int C, R;
    unordered_map<string, unordered_set<string> > mapa; 
	while(cin >> C >> R){
		mapa.clear();
		string a, b, lx; getline(cin, lx);
		for(int i=0; i<C; i++){
			getline(cin, a); int S; cin >> S; getline(cin, lx);
			for(int j=0;j<S; j++){
				getline(cin, b);
				mapa[a].insert(b);
			}
		}
		for(int i=0; i<R; i++){
			getline(cin, lx); b.clear(); a.clear();
			int yep = 0, p = 0;
			while(42){
				if(lx[p]==';'){
					p++;
					break;
				}
				a.pb(lx[p++]);
			}
			while(p<lx.size()) b.pb(lx[p++]);
			if(mapa[a].count(b)){
				puts("Y");
			}else{
				puts("N");
			}
		}
	}	
	return 0;
}