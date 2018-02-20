#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bitset<10000010> bs;
vector<ll> primes;
void sieve(){
		bs.set();
		bs[0]=bs[1]=0;
		
		for(ll i=2;i<10000000;i++){
				if(bs[i]){
						for(ll j=i*i;j<10000000;j+=i){
								bs[j]=0;
							}
						//cout<<"pushing values"<<i<<endl;
						primes.push_back(i);
					}
			}
		//cout<<"here"<<endl;
		for(int i=0;i<10;i++)
			cout<<primes[i]<<" ";
		cout<<endl;
	}
void no_of_divisors(ll n){
		ll ans=1;
		ll idx=0;
		ll pf=primes[idx];
		
		while(pf*pf<=n){
				ll power=0;
				while(n%pf==0){
						power++;
						n/=pf;
					}
				ans=ans*(power+1);
				pf=primes[++idx];
			}
		if(n!=1){
				ans*=2;
			}
		cout<<ans<<endl;
	}
int main(){
	sieve();
	no_of_divisors(12);
	no_of_divisors(24);
return 0;
}
