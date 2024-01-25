/*
Given N elements and a number K, find the longest subarray which has not more than K distinct elements.(It can have less than K).

Input : arr[] = {1, 2, 3, 4, 5}, k = 6 
Output : 1 2 3 4 5 

Explanation: The whole array has only 5 
distinct elements which is less than k, 
so we print the array itself.

Input: arr[] = {6, 5, 1, 2, 3, 2, 1, 4, 5},  k = 3
Output: 1 2 3 2 1, 
The output is the longest subarray with 3
distinct elements.

*/

int longestSubarray(vector<int>&nums,int k){

map<int,int> freq;
int i=0,j=0,ans=-1;


while(i<n){
  freq[nums[i]]++;
  while (i>j && freq.size()>k){
    freq[nums[j]]--;
    if(freq[nums[j]]==0)
      freq.erase(nums[j]);
    j++;
  }
 ans = max(ans,i-j+1);
 i++;
}
return ans;

}
