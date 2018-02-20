#include<bits/stdc++.h>
using namespace std;



int main(){
	
	int n=4;
	int m=5;
	vector<int> v[100];
	for(int i=1;i<=m;i++){
			cout<<"enter the value of s,d and w"<<endl;
			int s,d,w;
			cin>>s>>d>>w;
			v[i].push_back(s);
			v[i].push_back(d);
			v[i].push_back(w);
		}
	int dis[100];
	for(int i=0;i<100;i++)
		dis[i]=2e8;
	for(int i=0;i<5;i++)
		cout<<dis[i]<< " ";
	cout<<endl;
	
	dis[1]=0;
	for(int i=1;i<=n-1;i++){
			int j=1;
			
			while(v[j].size() != 0){
					cout<<v[j][2]<<endl;
					if(dis[ v[j][0] ] + v[j][2] < dis[ v[j][1] ]){
							dis[v[j][1]] = dis[v[j][0]] + v[j][2];
							cout<<"inside if statement "<<endl;
							cout<<" the source vertex is "<<v[j][0]<<endl;
							cout<<" the destination vertex is "<<v[j][1]<<endl;
							cout<<" the distance b/w them is "<<dis[v[j][1]]<<endl;
						}
					j++;
				}
		}
	for(int i=1;i<=n;i++){
			cout<<dis[i]<<" ";
		}
return 0;
}
