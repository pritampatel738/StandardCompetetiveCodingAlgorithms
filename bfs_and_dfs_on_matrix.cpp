#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int adj[1000][1000];
//vector<int> adjj[1000];
bool visi[1000];
bool visi1[1000];
int n,e;
		
// my dfs on adjacency matrix...

void dfs(int s){
		cout<<s<<" ";
		visi[s]=true;
		
		for(int i=1;i<=n;i++){
				if(adj[s][i] && !visi[i]){
						dfs(i);
					}
			}
	}

// my bfs on adjacency matrix...

void bfs(int s){
		visi1[s]=true;
		cout<<s<<" ";
		
		queue<int> q;
		q.push(s);
		while(!q.empty()){
			
				int s=q.front();
				q.pop();
				for(int i=1;i<=n;i++){
						if(adj[s][i] && !visi1[i]){
								visi1[i]=true;
								cout<<i<<" ";
								q.push(i);
						}
					}
			}
	}

int main(){
	
	cin>>n>>e;
	memset(visi,false,sizeof visi);
	memset(visi1,false,sizeof visi1);
	
	while(e--){
			int s,d;
			cin>>s>>d;
			//adjj[s].push_back(d);
			//adjj[d].push_back(s);
			adj[s][d]=1;
			adj[d][s]=1;
		}
	bfs(1);
	dfs(1);

return 0;
}
