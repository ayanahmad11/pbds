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

vector<int> a(n);
fl(i,0,n) cin>>a[i];

int i=0,j=0,sum=0,ans=0;
while(j<n){
	sum+=a[j];
	while(i<=j && sum>=k){  //{ for sum atleast k change sum to } sum>k
		sum = sum - a[i];
		i++;
		
	}
	ans+=(j-i+1);
	j++;
}
cout<<"sum<k"<<" "<<ans<<endl;
cout<<"sum>=k"<<" "<<n*(n+1)/2 - ans;
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
