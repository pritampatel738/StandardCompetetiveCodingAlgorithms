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
ll sum_of_divisors(ll N) {
ll PF_idx = 0, PF = primes[PF_idx], ans = 1;
// start from ans = 1
while (PF * PF <= N) {
ll power = 0;
while (N % PF == 0) { N /= PF; power++; }
ans *= ((ll)pow((double)PF, power + 1.0) - 1) / (PF - 1);
PF = primes[++PF_idx];
}
if (N != 1) ans *= ((ll)pow((double)N, 2.0) - 1) / (N - 1); // last
return ans;
}
int main(){
	sieve();
	cout<<sum_of_divisors(60)<<endl;
	cout<<sum_of_divisors(24)<<endl;
return 0;
}
