/*
Given an array of integers, what is the Length of Longest Subarray that contains no more than two distinct values such that the distinct values differ by no more than 1?
Example:
arr=[0,1,2,1,2,3]
The largest such subarray has length 4:[1,2,1,2].
arr=[1,1,1,3,3,2,2]
The largest such subarray has length 4:[3,3,2,2]. The values of 1 and 3 differ by nore than 1 so [1,1,1,3,3] is not valid.
Constraints
The longest subarray will have fewer than 35 elements.
1<=n<=10^5
1<=arr[i]<=10^9
Function description:
Complete the function longestSubarray in the editor below.
longestSubarray has the following parameter(s).
int arr[n]:an array of integers
Returns:
int:the length of the longest subarray
Sample:
Input:
5
1
2
3
4
5
Output: 2
Explanation:
n=5
arr=[1,2,3,4,5]
All elements are distinct, so any subarray of length 2 is maximum.
*/

int longestSubarray(vector<int> arr) {
    int j=0,ans=0;
    map<int,int>p;
    for(int i=0;i<arr.size();i++){
        p[arr[i]]++;
        while(p.size()>2 && j<i){
            p[arr[j]]--;
            if(p[arr[j]]==0){p.erase(arr[j]);}
            j++;
        }
        if(p.size()==1){
            ans=max(ans,i-j+1);
        }
        else if(p.size()==2){
            vector<int>v;
            for(auto x:p){
                v.push_back(x.first);
            }
            if(abs(v[0]-v[1])<=1){
                ans=max(ans,i-j+1);
            }
        }
    }
    return ans;
}
