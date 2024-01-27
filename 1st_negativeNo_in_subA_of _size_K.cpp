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

queue<int> qu;
vector<int> ans;

for(int i=0;i<k;i++){
	if(v[i]<0)
		qu.push(i);
}

int ind = qu.front();
ans.push_back(v[ind]);

for(int i=1 ;i<= n-k; i++){
	int j = i+k-1;
	
	if(v[j]<0)// add last element in subarray to queue;
		qu.push(j);
	if(qu.front() == i-1)// remove previous element 
		qu.pop();
	ind = qu.front();
	ans.push_back(v[ind]);
	
}

for(auto x:ans) cout<<x<<" ";
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

