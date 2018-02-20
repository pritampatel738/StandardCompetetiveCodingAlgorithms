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
void no_of_prime_factors(ll n){
	//cout<<"inside prime factors"<<endl;
		int idx=0;
		int pf=primes[idx];
		int count=0;
		while(pf*pf<=n){
				while(n%pf==0){
						count+=1;
						n/=pf;
					}
				pf=primes[++idx];
			}
		if(n!=1)
			count+=1;
		cout<<count<<endl;
	}
int main(){
	sieve();
	no_of_prime_factors(12);
	no_of_prime_factors(24);
return 0;
}
