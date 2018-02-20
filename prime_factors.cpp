#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bitset<100000010> bs;
vector<ll> prime;
void sieve(){
		bs.set();
		bs[0]=bs[1]=0;
		for(int i=2;i<=10000000;i++){
				if(bs[i]){
						for(int j=i;j<=10000000;j+=i)
							bs[j]=0;
						prime.push_back(i);
					}
				
			}
		for(int i=0;i<10;i++)
			cout<<prime[i]<<" ";
		cout<<endl;
	}

void prime_factors(ll n){
		vector<int> prime_fact;
		int idx=0;
		ll pf=prime[idx];
		
		while(pf*pf<=n){
				while(n%pf==0 && n){
						prime_fact.push_back(pf);
						n/=pf;
					}
				pf=prime[++idx];
			}
		if(n!=1)
			prime_fact.push_back(n);
		for(int i=0;i<(int)prime_fact.size();i++)
			cout<<prime_fact[i]<<" ";
		cout<<endl;
	}
int main(){

	sieve();
	prime_factors(12);
	prime_factors(24);
return 0;
}
