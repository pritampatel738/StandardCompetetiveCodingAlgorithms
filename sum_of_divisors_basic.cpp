#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	
	int sum=0;
	for(int i=2;i*i<=n;i++){
			if(n%i==0){
					if(n/i==i){
							sum += i;
						}
					else{
							sum += i+n/i;
						}
				}
		}
	cout<<sum<<endl; // excluding 1 and the n itself....
return 0;
}
