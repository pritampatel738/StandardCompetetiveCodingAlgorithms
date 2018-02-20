#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define n 10000000
long long phi[n+1];
void phii()
{
    
    for (int i=1; i<=n; i++)
        phi[i] = i;
    for (int p=2; p<=n; p++)
    {
        if (phi[p] == p)
        {
            phi[p] = p-1;
            for (int i = 2*p; i<=n; i += p)
            {
               phi[i] = (phi[i]/p) * (p-1);
            }
        }
    }
    for (int i=1; i<=10; i++)
		cout<<phi[i]<<" ";
	cout<<endl;
}
int main(){

	phii();
return 0;
}
