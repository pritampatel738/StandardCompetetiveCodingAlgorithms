#include<bits/stdc++.h>
using namespace std;

#define SIZE 100000 + 1

vector < pair < int , int > > v [SIZE];   // each vertex has all the connected vertices with the edges weights
int dist [SIZE];
bool vis [SIZE];

void dijkstra(){
                                                // set the vertices distances as infinity
    memset(vis, false , sizeof vis);            // set all vertex as unvisited
    dist[1] = 0;
    multiset < pair < int , int > > s;          // multiset do the job as a min-priority queue

    s.insert({0 , 1});                          // insert the source node with distance = 0

    while(!s.empty()){

        pair <int , int> p = *s.begin();        // pop the vertex with the minimum distance
        s.erase(s.begin());

        int x = p.second; // this is the current source node ...
        
        if( vis[x] ) {continue;} // check if the popped vertex is visited before
        
        vis[x] = true;

        for(int i = 0; i < (int)v[x].size(); i++){
			
            int e = v[x][i].first;  // this is our destination node...
            int w = v[x][i].second;// this is our weight associated with source and destination ....
            
            
            if(dist[x] + w < dist[e]  ){
				            // check if the next vertex distance could be minimized
                dist[e] = dist[x] + w;
                
                s.insert({dist[e],  e} );           // insert the next vertex with the updated distance
            }
            
        }
    }
    cout<<dist[4];
    cout<<endl<<dist[5]<<endl<<dist[3]<<endl<<dist[2];
}

int main(){

	int n,m;
	cin>>n>>m;
	memset(dist,100,sizeof(dist));
	while(m--){
		int s,d,w;
		cin>>s>>d>>w;
		
		v[s].push_back(make_pair(d,w));
	}
	dijkstra();
	return 0;
}
