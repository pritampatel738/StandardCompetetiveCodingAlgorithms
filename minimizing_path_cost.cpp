#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,w,q;
	
	cin>>n>>w;
	map<string,int> m;
	int z=1;
	for(int i=1;i<=n;i++){
			string s;
			cin>>s;
			m[s]=z++;
			
		}
	int dist[105][105];
	for(int i=0;i<n+5;i++){
		for(int j=0;j<n+5;j++){
				if(i==j)
					dist[i][j]=0;
				else
					dist[i][j]=100000;
		}
	}
	while(w--){
			string s,d;
			int v;
			cin>>s>>d>>v;
			int a=m[s];
			int b=m[d];
			dist[a][b]=v;
			dist[b][a]=v;
			
		}/*
for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<dist[i][j]<<" ";
		cout<<endl;
	} */
	for(int k = 1; k <= n; k++){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            dist[i][j] = min( dist[i][j], dist[i][k] + dist[k][j] );
        }
    }
}

	cin>>q;
	while(q--){
			string s,d;
			cin>>s>>d;
			int a=m[s];
			int b=m[d];
			cout<<dist[a][b]<<endl;
		}
return 0;
}
