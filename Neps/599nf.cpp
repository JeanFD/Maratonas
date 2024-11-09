// #include <bits/stdc++.h>
// #define d(x) cout<<#x<<" = "<<x<<endl;
// using namespace std;

// int main(){
//     int n, m;
//     string ent;
//     vector<string> dic;
//     cin>>n>>m;

//     for(int i=0; i<n; i++){
//         cin>>ent;
//         dic.push_back(ent);
//     }

//     for(int i=0; i<m; i++){
//         cin>>ent;
//         bool esp=false;
//         for(auto pal : dic){
//             int dp[pal.size()+1][ent.size()+1];
//             memset(dp, -1, sizeof dp);
//             for (int j = 1; j <= (int)pal.size(); j++){
// 		        for (int k = 1; k <= (int)ent.size(); k++){
//                     if(pal[j-1]!=ent[k-1]) dp[j][k]=min(dp[j][k-1]+1, dp[j-1][k]+1);
//                     else dp[j][k]=dp[j-1][k-1]+1;
//                 }
//             }
//             d(dp[pal.size()][ent.size()])
//             if(max(pal.size(), ent.size())-dp[pal.size()][ent.size()]<=2){
//                 if(esp) cout<<" ";
//                 esp=true;
//                 cout<<pal;
//             }
//         }cout<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

string a,b;
int pd[26][26];

// Função para calcular a distância de edição
int ed(int i, int j){
  if(i == 0) return j;
  if(j == 0) return i;
  if(pd[i][j] != -1) return pd[i][j];
  // Recursão e atualização da tabela dp
  return pd[i][j] = min(
    ed(i-1,j-1) + (a[i-1] == b[j-1] ? 0 : 1),
    min( ed(i-1,j)+1, ed(i,j-1)+1 )
  );
}

int main() {

  char s[30];
  vector<string> v;
  int n,m; scanf(" %d %d", &n, &m);
  // Ler palavras do dicionário
  for(int i=0; i<n; i++){
    scanf(" %s", s); v.push_back(string(s));
  }
  // Ler palavras do usuário e calcular a distância de edição
  while(m--){
    scanf(" %s", s); a = string(s);
    int f = 0;
    for(int i=0; i<n; i++){
      b = v[i];
      memset(pd,-1,sizeof pd);
      // Se a distância de edição for <= 2, imprima a palavra do dicionário
      if(ed(a.size(), b.size()) <= 2)
        printf("%s%s", (f++ ? " " : ""), b.c_str() );
    }
    printf("\n");
  }  
}