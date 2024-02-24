// https://codeforces.com/contest/1932/problem/E
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
    std::cin >> n;
    
    std::string s;
    std::cin >> s;
    
    std::reverse(s.begin(), s.end());
    
    // removed all zeroes from front side of original number 
    
    while (s.back() == '0') {
        s.pop_back();
        n--;
    }
    
    debug(s);
    
    
    // divided all digits in a number into a vector
    std::vector<int> f(n);
    for (int i = 0; i < n; i++) {
        f[i] = s[i] - '0';
    }
    debug(f); 
    
    // calc dig sum
    
    for (int i = n - 2; i >= 0; i--) {
        f[i] += f[i + 1];
    }
    
    debug(f);
    
    
    for (int i = 0; i < n; i++) {
        if (f[i] >= 10) {
            if (i == n - 1) {
                n++;
                f.push_back(0);
            }
           // ADDING CARRY
            f[i + 1] += f[i] / 10;
            f[i] %= 10;
        }
    }
    debug(f);
    std::reverse(f.begin(), f.end());
    for (int i = 0; i < n; i++) {
        std::cout << f[i];
    }
    std::cout << "\n";
	// int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         reverse(s.begin(), s.end());
//         vector<int> a(n + 1);
//         for (int i = n - 1; i >= 0; i--) {
//             a[i] = a[i + 1] + (s[i] - '0');
//         }
//         debug(a);
//         string res;
//         int c = 0;
//   // 3rd part
//         for (int i = 0; i < n; i++) {
//             c += a[i];
//             res += (char)(c % 10 + '0');
//             debug(res);
           
//             c /= 10;    
//              debug(c);
//         }
//         res += (char)(c + '0');
//         while (res.back() == '0') {
//             res.pop_back();
//         }
//         reverse(res.begin(), res.end());
//         cout << res << "\n";
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
