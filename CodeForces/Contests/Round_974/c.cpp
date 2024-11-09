#include <bits/stdc++.h>
using namespace std;

// S = salario[(n/2)+1];

// ms + (x/n) = (S*2)+1

// ms*n + X = ((S*2)+1) * n

// X = ((S*2))+1*n-ms*n

int main(){
    int t, n, a;
    long long S, soma, ans;
    vector<int> cidade;

    cin>>t;
    while(t--){
        cidade.clear();
        soma=0;
        cin>>n;

        
        for(int i=0; i<n; i++){
            cin>>a;
            soma+=a;
            cidade.push_back(a);
        }
        if(n<3){
            cout<<"-1\n";
            continue;
        } 
        sort(cidade.begin(), cidade.end());
        
        S = cidade[floor(n/2.0)];

        //cout<<ceil(n/2.0)+1<<"--"<<S<<"--";
        ans = (S*2*n)-(soma)+1;
        if((soma*1.0+ans/n*1.0)<=(S*2))ans+=1;

        if((soma*1.0/n)>(S*2)) cout<<0<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}