// https://codeforces.com/contest/1932/problem/D
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
#define ss second
#define pb push_back 
#define sz(x) (int)x.size()
#define mod 1000000007
long double PI=3.14159265358979323846;
int nxt(){int x; cin >> x; return x;}
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
	
	char tr ;
	cin>>tr;
	 
	map<char,vector<string>> f;
	
	for(int i=0;i<2*n;i++){
		
		string s;
		cin>>s;
		f[s[1]].pb(s);
	
		
	}
	// for(auto x:f){
	// 	cout<<x.ff<<" ";
	// 	for(auto y:x.ss){
	// 		cout<<y<<" ";
	// 	}
	// 	cout<<endl;
		
	// }
		vector<array<string, 2>> ans;
    for (auto c : {'C', 'D', 'H', 'S'}) {
         sort(f[c].begin(), f[c].end());
        if (c == tr) {
            continue;
        }
        for (int i = 0; i + 1 < f[c].size(); i += 2) {
            ans.push_back({f[c][i], f[c][i + 1]});
        }
        if (f[c].size() % 2 == 1) {
            if (f[tr].empty()) {
                 cout << "IMPOSSIBLE\n";
                return;
            }
            auto t = f[tr].back();
            f[tr].pop_back();
            ans.push_back({f[c].back(), t});
        }
    }
	// debug(ans);
	for (int i = 0; i + 1 < f[tr].size(); i += 2) {
        ans.push_back({f[tr][i], f[tr][i + 1]});
    }
    
    for (auto [x, y] : ans) {
        std::cout << x << " " << y << "\n";
    }
	
} 
int32_t main(){
ios::sync_with_stdio(0);
cin.tie(0);
   int t=1;
   cin>>t; 
   while(t--){
   ayan(); 
    }
    return 0;
}
