#include<bits/stdc++.h>
using namespace std;

string x,y;
int d[100][100];
// this algo uses prefix approach ....


// top down approach ...
int dp(int i,int j){
	
		if(i==0 || j==0)
			return 0;
			
		if(d[i][j]>0)
			return d[i][j];
		
		if(x[i-1]==y[j-1]){
				d[i][j]=1+dp(i-1,j-1);
			}
		else
			return max(dp(i-1,j),dp(i,j-1));
		
		return d[i][j];
	
	}
// bottom up approach ....
int dp1(int i,int j){
			
			int lcs[100][100];
			
			for(int i=0;i<=x.length();i++){
					for(int j=0;j<=y.length();j++){
							if(i==0 || j==0){
									lcs[i][j]=0;
								}
							else if(x[i-1]==y[j-1]){
									lcs[i][j]=1+lcs[i-1][j-1];
								}
							else
								lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
						}
				}
	}	
	
	
int main(){

	cin>>x>>y;
	int i=x.length();
	int j=y.length();
	cout<<dp(i,j)<<endl;
return 0;
}
