#include<bits/stdc++.h>
using namespace std;

void power_set(int arr[],int n){
	
		int power_set_size=pow(2,n);
		
		for(int counter=0;counter<power_set_size;counter++){
				for(int j=0;j<n;j++)
					if(counter & (1<<j)){
							cout<<arr[j]<<" ";
						}
				cout<<endl;
			}
	}

int main(){

	int arr[]={1,2,3};
	power_set(arr,3);
return 0;
}
