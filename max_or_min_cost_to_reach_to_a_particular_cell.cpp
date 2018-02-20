#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100][100];

// this is the top-down approach ....

ll dp(int i,int j){
		
		if(i<0 || j<0)
			return 0;
		if(i==0 && j==0)
			return arr[0][0];
			
		else
			return max(dp(i-1,j),dp(i,j-1))+arr[i][j];
	
	}
int main(){

	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cin>>arr[i][j];
		}
		
	cout<<dp(3,3);
	
return 0;
}
