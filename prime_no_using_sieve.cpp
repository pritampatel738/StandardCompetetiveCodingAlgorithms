#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bitset<10000010> bs;
vector<ll> prime;
void sieve(){
		bs.set();
		bs[0]=bs[1]=0;
		for(ll i=2;i<=10000000;i++){
				if(bs[i]){
						for(ll j=i*i;j<=10000000;j+=i)
							bs[j]=0;
						prime.push_back(i);
					}
				
			}
		for(int i=0;i<100;i++)
			cout<<prime[i]<<" ";
		cout<<endl;
	}
int main(){

	sieve();
return 0;
}
