#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

int main(){ _
    int n; cin>>n;
    stack<int> papai;
    string comand; int num; 
    string ans = "";
    for(int i=0; i<n; i++){
        cin.ignore();
        cin>>comand;
        if(comand=="PUSH"){
            cin>>num;
            if(papai.empty()) papai.push(num);
            else papai.push(min(num, papai.top()));
        }
        if(comand=="POP"){
            if(papai.empty())ans+="EMPTY\n";
            else papai.pop();
        }
        if(comand=="MIN"){
            if(papai.empty())ans+="EMPTY\n";
            else ans+=to_string(papai.top())+endl;
        }
    }
    cout<<ans;
    return 0;
}