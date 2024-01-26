/*
Given An Array Of N integers and a Number K return max sum of subarray of size k that has K Distinct Elements.
 if it does not exist return -1.

Test Case:
[1,2,3,4,4,3,2,1],k=3
Output:
9
[1,2,3],[2,3,4],[4,3,2],[3,2,1] are valid subarrays as they have k distinct elements.max sum among them is 9

Test Case:
[1,2,2] k=3
Output:
-1
No valid subarray of length k exist that has all k elements unique.

Constrainst:
1<=n<=1e5
k<=n
1<=arr[i]<=1e9
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

vector<int> nums(n);
fl(i,0,n) cin>>nums[i];

int ans=-1;
map<int,int> freq;
int sum=0;
int i=0,j=0;
while(j < n) {
    freq[nums[j]]++;
    sum += nums[j];
    if(j - i + 1 < k) {
        j++;
    }
    else if(j - i + 1 == k) {
            if(freq.size() == k) {
                ans = max(ans, sum);
            }
            freq[nums[i]]--;
            if(freq[nums[i]] == 0)
                freq.erase(nums[i]);
            sum -= nums[i];
            i++;
            j++;
    }
}
  // mine
  
// while(i<n){
// 	freq[nums[i]]++;
// 	while(j<i && (freq.size()>k ||abs(i-j+1)>k))
// 	{
// 		freq[nums[j]]--;
// 		if(freq[nums[j]]==0)
// 			freq.erase(nums[j]);
// 		j++;
// 	}
// 	if(freq.size()==k && (i-j+1==k)){
// 		int sum=0LL;
// 		for(auto x:freq)
// 			sum+=x.first;
	
// 		ans=max(ans,sum);		 
// 	}
// 	i++;
// }
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
