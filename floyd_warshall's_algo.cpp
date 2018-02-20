#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"enter the values of n and m"<<endl;
	int m;
	cin>>n>>m;
	int dist[n+1][n+1];
	for(int i=1;i<=n;i++){ // this algo uses an adjacency matrix to find the all pairs shortest path
			for(int j=1;j<=n;j++)
				cin>>dist[i][j];
		}
	for(int k=1;k<=n;k++){
			for(int i=1;i<=n;i++){
					for(int j=1;j<=n;j++){
							dist[i][j] = min(dist[i][j],dist[i][k] + dist[k][j]);
						}
				}
		}
	for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
					cout<<" the distance of "<<j<<" from "<<i<<" is "<<dist[i][j]<<endl;
				}
		}
return 0;
}
