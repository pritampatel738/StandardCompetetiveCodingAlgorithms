#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll dp[100][100];

// topdown approach ....
ll func(ll n,ll k){
		
		if(k==0)
			return 1;
		if(k==1)
			return n;
		if(n<1)
			return 0;
			
		if(dp[n][k] >0)
			return dp[n][k];
		cout<<n<<" "<<k<<endl;
		dp[n][k] =func(n-1,k)+func(n-1,k-1);
		return dp[n][k];
		
	}
// botton up approach ....
ll dp1[100][100];
void func1(ll n,ll k){
	
		for(ll i=0;i<=n;i++){
				for(ll j=0;j<=min(k,n);j++){
						if(j==0 || j==i)
							dp1[i][j]=1;
						else
							dp1[i][j]=dp1[i-1][j-1]+dp1[i-1][j];
					}
			}
	cout<<dp1[n][k]<<endl;
	}
int main(){

	ll n,k;
	cin>>n>>k;
	
	cout<<func(n,k)<<endl;
	func1(n,k);

return 0;
}
