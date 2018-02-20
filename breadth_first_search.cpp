#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100000];

bool visited[100000];
void bfs(int s,int n){
	int level[100000];
		cout<<s<<" ";
		visited[s]=true;
		queue<int>  q;
		q.push(s);
		level[s]=0;
		while(!q.empty()){
				int a=q.front();
				q.pop();
				for(int i=0;i<(int)adj[a].size();i++){
						if(visited[adj[a][i]]==false){
								cout<<adj[a][i]<<" ";
								visited[adj[a][i]]=true;
								q.push(adj[a][i]);
								level[adj[a][i]]=level[a]+1;
							}
					}
			}
		cout<<endl;
		for(int i=1;i<=n;i++){
				cout<<"the level of "<<i<<" is "<<level[i]<<endl;
			}
	}
	
int main(){

	int n,e;
	cin>>n>>e;
	memset(visited,false,sizeof(visited));
	while(e--){
			
			int s,d;
			cin>>s>>d;
			adj[s].push_back(d);
			adj[d].push_back(s);
			
		}
	bfs(1,n);
return 0;
}
