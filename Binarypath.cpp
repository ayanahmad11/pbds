//https://codeforces.com/contest/1937/problem/B
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
	int n;
	cin>>n;
	
 vector<char> a(n);
 fl(i,0,n)cin >>a[i];
 
 vector<char> b(n);
 fl(i,0,n)
 cin >>b[i];
 

 debug(a);
 debug(b);
 
 string ans = "";
 ans+=a[0];
 int cnt=1;
 int f=0,p=0;
 for(int i=1;i<n;i++){
 	 	
 	int c1 = (a[i]- '0' );
 	int c2 = b[i-1]-'0';
 	if(c1>c2)
 	{
 		ans+='0';
 		f=1;
 		p=i-1;
 		break;
 	}
 	else
 		ans+=a[i];
 	
 	
}

if(f){
	fl(i,p+1,n){
		ans+=b[i];
	}
}
else
	ans+=b[n-1];
debug(ans);
int start = a[0];

fl(i,1,n){

if(a[i]==b[i-1])
	cnt++;
else if(a[i]=='0' && b[i-1]=='1' )
{
	cnt=1;
	
	
}
else
   break;
	



	
}

	cout<<ans<<endl;
	cout<<cnt<<endl;
	
	

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
