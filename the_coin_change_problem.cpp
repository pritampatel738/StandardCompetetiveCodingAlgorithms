#include<bits/stdc++.h>
using namespace std;

int n,m;

int dp[1000][1000];
int s[55];
int count(int n,int m,int s[]){
	
		if(n==0){
			return 1; // if n==0 then there is one way of making the sum ....
		}
		
		if(m==0 || n<0)
			return 0;
			
			
		if(dp[n][m]>0){
			
			return dp[n][m];
		}
		
		
		dp[n][m]=count(n-s[m-1],m,s) + count(n,m-1,s);
		
		
		return dp[n][m];
	}
	
int main(){

	cin>>n>>m;
	
	for(int i=0;i<m;i++){
			cin>>s[i];
		}
		
	cout<<count(n,m,s);

return 0;
}
