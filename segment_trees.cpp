#include<bits/stdc++.h>
using namespace std;

int tree[1000000];
int arr[1000000];

void build(int node,int start,int end){
	
		if(start==end){
				tree[start]=arr[start]; // this is the case of leaf node ....
			}
		else{
			
				int mid=(start+end)/2;
				
				build(2*node,start,mid); // 
				build(2*node+1,mid+1,end);			
			}
		tree[node]=min(tree[2*node],tree[2*node+1]);
		
	}
	



void update(int node ,int start,int end,int idx,int val){
	
		if(start==end){
				arr[idx]+=val;
			}
		else{
				int mid=(start+end)/2;
				if(start<=idx && idx<=mid){
						update(2*node,start,mid,idx,val);
					}
				else{
					
						update(2*node+1,mid+1,end,idx,val);
					}
			}
	// minimum of both the numbers ...
	tree[node]=min(tree[2*node],tree[2*node+1]);
	}
	
	




int main(){

	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
	build(0,0,n-1); // first '0' is the node value , second one is the start value and n-1 is the end value .....


return 0;
}
