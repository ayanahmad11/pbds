/*
Given an array arr[] of size N and an integer K,
 the task is to find the length of the largest subarray having 
 the sum of its elements at most K, where K > 0.

Examples: 

Input: arr[] = {1, 2, 1, 0, 1, 1, 0}, k = 4 Output: 5
Explanation: {1, 2, 1} => sum = 4, length = 3 {1, 2, 1, 0}, {2, 1, 0, 1} => sum = 4, length = 4 {1, 0, 1, 1, 0} =>5 sum = 3, length = 5

Input: 8, 2, 4, 0, 1, 1, 0, K = 9
Output: 6

Input: 11 12 1 2 7 ,k=10
Output: 3


*/

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define int long long int
#define vi  vector<int>
#define vp  vector<pair<int,int>>
#define pb  push_back
#define all(v) v.begin(),v.end()
#define fl(i,a,n)  for(int i = (a); i < (n); i++)


int largestSubarray(vector<int>&arr,int k){

int sum=0,ans=-1;
int i=0,j=0;	
while(i<arr.size()){
		sum+=arr[i];
		while(i>=j && sum>k){
			sum-=arr[j];
			j++;
		}
		
		
		ans=max(ans,i-j+1);
		i++;
	
	}
	return ans;
}

void ayan(){

int n,k;
cin>>n>>k;

vector<int> arr(n);
fl(i,0,n) cin>>arr[i];

int res=largestSubarray(arr,k);
cout<<res<<endl;
}


int32_t main(){

ios_base::sync_with_stdio(0);
cin.tie(0);

int tt;
cin>>tt;

while(tt--){

	ayan();
}

return 0;
} 
