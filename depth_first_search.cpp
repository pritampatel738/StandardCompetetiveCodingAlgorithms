#include<bits/stdc++.h>
using namespace std;

vector<int> adj[10000];
bool visited[10000];

void dfs(int s){
		cout<<s<<" ";
		visited[s]=true;
		
		for(int i=0;i<(int)adj[s].size();i++){
				if(!visited[adj[s][i]])
					dfs(adj[s][i]);
			}
	}
int main(){
	int n,e;
	cin>>n>>e;
	memset(visited,false,sizeof visited);
	
	while(e--){
			int s,d;
			cin>>s>>d;
			adj[s].push_back(d);
			adj[d].push_back(s);
		}
	dfs(1);


return 0;
}
