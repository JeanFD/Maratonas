#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    map<char, int> letras;
    for(int i = 0; i<(int)s.size(); i++){
        letras[s[i]]++;
    }
    
    string ans = "";
    for(auto i : letras){
        if(i.second%n!=0) {
            cout<<"-1"<<endl;
            return 0;
        }
        else{
            for(int j=0; j<i.second/n; j++) ans+=i.first;
        }
    }
    
    for(int i=0; i<n; i++) cout<<ans;
    cout<<endl;
    return 0;
}