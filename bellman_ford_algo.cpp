#include<bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cout<<"enter the number of vetices "<<endl;
	cin>>n;
	cout<<"enter the number of edges "<<endl;
	int m;
	cin>>m;
	
	vector<int> v[100];
	int dis[100];
	
	for(int i=0;i<m+2;i++){
			v[i].clear();
			dis[i]=2e9; // initially setting all distances to infinity....
		}
	for(int i=0;i<5;i++)
		cout<<dis[i]<<" ";
	cout<<endl;
	
	
	for(int i=0;i<m;i++){
			cout<<"enter the next s d and w "<<endl;
			int s,d,w;
			cin>>s>>d>>w;
			v[i].push_back(s);
			v[i].push_back(d);
			v[i].push_back(w);
		}
	// the distance of the source node must be zero...
	// let's start from the zeroth vertex....
	dis[0]=0;
	// at most n-1 vetices will be traversed for finding the shortest path......
	// graph structure is like this....
	
	// 0 s d w
	// 1 s d w
	// 2 s d 2
	
	
	
	for(int i=0;i<n-1;i++){ // traverse through all the n-1 vertices
			int j=0; // variable used to traverse all the edges....
			
			while(v[j].size() !=0){
				//cout<<v[j][0]<<" " <<v[j][2]<< " "<<v[j][1]<<endl;
				// v[j][0] denotes the source vertex....
				// v[j][1] denotes the destination vertex...
				// v[j][2] denotes the weight of the path between source and the destination....
				
					if(dis[v[j][0]] + v[j][2] < dis[v[j][1]]){ 
						// if source distance + weight < next distance.... then update the values...
						dis[v[j][1]] = dis[v[j][0]] + dis[v[j][2]];
						cout<<"inside if statement"<<endl;
					}
					j++;
				}
		}
	for(int i=0;i<n;i++){
			cout<<dis[i]<<" ";
		}
return 0;
}











