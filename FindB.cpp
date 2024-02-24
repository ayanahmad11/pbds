// https://codeforces.com/contest/1923/problem/C
// Find B
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
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
int n,q;
cin>>n>>q;

vi v(n);
fl(i,0,n)
cin>>v[i];


vi pref(n+1,0),cnt(n+1,0);

for(int i=1;i<=n;i++){
	pref[i] = pref[i-1]+v[i-1]-1;
}

for(int i=1;i<=n;i++){
	cnt[i] = cnt[i - 1] + (v[i - 1] == 1);
}

// debug(pref);

while(q--){
	int l,r;
	cin>>l>>r;
	
	if(l==r)
	{
		cout<<"NO"<<endl;
			continue;
	} 
	// cout<<pref[-1]<<endl;
	int sum = pref[r]-pref[l-1];
	int c1 = cnt[r]-cnt[l-1];
	if(sum<c1) cout<<"NO"<<endl;
	else cout<<"YES"<<endl; 
	
	//
	// debug(sum);
	// double d = 0.0;
	// d =(double) sum/(double)(r-l+1);
	// // debug(d);
	 
	//  if(d>=(double)1.5)
	// cout<<"YES"<<endl;
	// else
	// cout<<"NO"<<endl; 
	// //1 1 1 1 4 = 8/5 = 1.6
 //    //2 2 2 2 0 =    	  
}

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
	
