#include<bits/stdc++.h>
using namespace std;

void subarray(int arr[],int n){ // total of n*(n+1)/2 subarrays....and 2^n subsets are possible...
	// subarrays are contiguous elements in the vector or array....
	
	// pick one starting point ...
	for(int i=0;i<n;i++){
			// pick one end point...
			for(int j=i;j<n;j++){
					// iterate through all the values..
					for(int k=i;k<=j;k++){
							cout<<arr[k]<<" ";
						}
					cout<<endl;
				}
		}
		
	}
int main(){

	int arr[]={1,2,3,4,5,6};
	subarray(arr,6);
return 0;
}
