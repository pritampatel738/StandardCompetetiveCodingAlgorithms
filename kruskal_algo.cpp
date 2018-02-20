#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool visited[100000];
int id[100000];
void initialize(){
	for(int i=0;i<10000;i++)
		id[i]=i; // setting all elements as their root themselves....
	}
	

ll root(ll a){
		// returning the root of a ...
		while(id[a]!=a){
				id[a]=id[id[a]];
				a=id[a];
			}
		return a;
	}
void union1(ll a,ll b){
	
		ll root_a=root(a);
		ll root_b=root(b);
		id[root_a]=id[root_b];
		
	}

void kruskal(long  deg[],pair<ll, pair<ll,ll> > p[],ll e,int n){
	ll minCost=0;
	for(int i=0;i<e;i++){
			ll x=p[i].second.second;
			ll y=p[i].second.first;
			ll cost=p[i].first;
			
			if(root(x) != root(y)){
					minCost+=cost;
					union1(x,y);
				}
		}
	cout<<minCost<<endl;
	for(int i=1;i<=n;i++){
			cout<<deg[i]<<" ";
		}
	cout<<endl;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
	initialize();
	memset(visited,false,sizeof visited);
	int n,e;
	cin>>n>>e;
	pair<ll , pair<ll , ll> > p[100000];
	long deg[1000000];
	for(int i=0;i<e;i++){
			int s,d,w;
			cin>>s>>d>>w;
			//deg[s]++;
			deg[d]++;
			p[i]=make_pair(w,make_pair(d,s));
		}
	sort(p,p+e);
	kruskal(deg,p,e,n);
	//cout<<kruskal(deg,p,e)<<endl;
   }
return 0;
}
