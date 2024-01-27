/*
Given an array of integers, find the median of each subarray of size k; 

Input:
6 3
-1 -2 -3 1 2 3

Output:
-2 -2 1 2

Explaiantion :

subarrays of size k are 
{[-1,-2,-3],[-3,-2,1],[-3,1,2],[1,2,3]}	

therefore {-2,-2,1,2} is the final answer;	
	
*/
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define endl "\n"
#define int long long int
#define vi  vector<int>
#define vp  vector<pair<int,int>>
#define pb  push_back
#define all(v) v.begin(),v.end()
#define fl(i,a,n)  for(int i = (a); i < (n); i++)
#define ff  first
#define ss  second
#define pb push_back 
#define sz(x) (int)x.size()
#define mod 1000000007


typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

/*--- debuger --- */    
void __print(int32_t x) {cerr << x;} void __print(long x) {cerr << x;} void __print(long long x) {cerr << x;} void __print(unsigned x) {cerr << x;} void __print(unsigned long x) {cerr << x;} void __print(unsigned long long x) {cerr << x;} void __print(float x) {cerr << x;} 
void __print(double x) {cerr << x;} void __print(long double x) {cerr << x;} void __print(char x) {cerr << '\'' << x << '\'';} void __print(const char *x) {cerr << '\"' << x << '\"';} void __print(const string &x) {cerr << '\"' << x << '\"';} void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V> void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
 
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


void ayan(){
int n ,k;
cin>>n>>k;

vector<int> v(n);
for(auto &i:v) cin >> i; 

pbds A;
vector<int> ans;

// at max only k elements will be present in A(pbds);
for (int i = 0; i < k; ++i)
{
	A.insert({v[i],i});	
}
// debug(A);
ans.pb((*A.find_by_order(k/2)).first);
// debug(ans);

for(int i=1;i<=n-k;i++){ // O(n)

	int j = i+k-1;		
	A.insert({v[j],j}); // O(logk)
	A.erase({v[i-1],i-1});// O(logk)
	ans.pb((*A.find_by_order(k/2)).first); //O(log k)
	
}
// therefore Time Complexity : O(nlogK)
//			 Space Complexity : O(K)	
// debug(ans);

for(auto x:ans)
	cout<<x<<" ";

cout<<endl;



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
