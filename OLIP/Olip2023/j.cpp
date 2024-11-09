#include<bits/stdc++.h>
using namespace std;

vector <int> in, fim;
set <vector<int>> s;

struct game{
	int c;
	vector <int> atual;
};

int cnt=0;

int bfs(){
	queue <game> q; game aux;
	aux.c=0, aux.atual=in; s.insert(in);
	q.push(aux);
	while(!q.empty()){
		game u=q.front(); q.pop();
			
		if(u.atual==fim){
			return u.c;
		}

		aux.atual=u.atual, aux.c=u.c+1;
		if(u.atual[0]==0){
			swap(aux.atual[0], aux.atual[3]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[0], aux.atual[3]),
			swap(aux.atual[0], aux.atual[1]);
			if(!s.count(aux.atual))  s.insert(aux.atual), q.push(aux);	
		}
		
		else if(u.atual[1]==0){	
			swap(aux.atual[1], aux.atual[4]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[1], aux.atual[4]),
			swap(aux.atual[1], aux.atual[2]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[1], aux.atual[2]),
			swap(aux.atual[0], aux.atual[1]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);	
		}
		
		else if(u.atual[2]==0){		
			swap(aux.atual[2], aux.atual[5]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[2], aux.atual[5]),
			swap(aux.atual[1], aux.atual[2]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);			
		}
		
		else if(u.atual[3]==0){
			swap(aux.atual[0], aux.atual[3]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[0], aux.atual[3]),
			swap(aux.atual[3], aux.atual[6]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[3], aux.atual[6]),
			swap(aux.atual[3], aux.atual[4]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);		
		}
		
		else if(u.atual[4]==0){
			swap(aux.atual[1], aux.atual[4]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[1], aux.atual[4]),
			swap(aux.atual[4], aux.atual[7]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[4], aux.atual[7]),
			swap(aux.atual[4], aux.atual[5]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[4], aux.atual[5]),
			swap(aux.atual[3], aux.atual[4]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);		
		}
		
		else if(u.atual[5]==0){
			swap(aux.atual[2], aux.atual[5]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[2], aux.atual[5]),
			swap(aux.atual[5], aux.atual[8]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[5], aux.atual[8]),
			swap(aux.atual[4], aux.atual[5]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);		
		}
		
		else if(u.atual[6]==0){
			swap(aux.atual[3], aux.atual[6]);
			if(!s.count(aux.atual))  s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[3], aux.atual[6]),
			swap(aux.atual[6], aux.atual[7]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);	
		}	
		
		else if(u.atual[7]==0){
			swap(aux.atual[4], aux.atual[7]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[4], aux.atual[7]),
			swap(aux.atual[7], aux.atual[8]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[7], aux.atual[8]),
			swap(aux.atual[6], aux.atual[7]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);		
		}
		
		else if(u.atual[8]==0){
			swap(aux.atual[5], aux.atual[8]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);
			
			swap(aux.atual[5], aux.atual[8]),
			swap(aux.atual[7], aux.atual[8]);
			if(!s.count(aux.atual)) s.insert(aux.atual), q.push(aux);		
		}
	}
	return -1;
}

int main()
{
    clock_t start = clock();

	for(int i=1; i<9; i++) fim.push_back(i);
    fim.push_back(0);
	int n;
	for(int i=0; i<9; i++){
	    cin>>n;
	    in.push_back(n);
	}
	int out=bfs();
	
	cout<<out<<endl;
    clock_t end = clock();
    double elapsed = end - start;
    cout<<elapsed/CLOCKS_PER_SEC<<endl;
	
return 0;
}