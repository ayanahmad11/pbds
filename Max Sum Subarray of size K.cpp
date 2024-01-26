/*
Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.
NOTE*: A subarray is a contiguous part of any given array.

Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]

Output:
700

Explanation:
Arr3  + Arr4 =700,
which is maximum.
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

void ayan(){
int n,k;
cin>>n>>k;

vi v(n);
fl(i,0,n) cin>>v[i];

int sum=0;
int i,j=0;

// O(K)
for(i=0;i<k;i++){
	sum+=v[i];	
}

int ans = INT_MIN;
while(i<=n){
	ans=max(ans,sum);
	sum+=v[i++];
	sum-=v[j++];
	
}
cout<<ans<<endl;
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
