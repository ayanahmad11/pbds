/* Link -https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/

You are given an integer array nums and an integer k.
The frequency of an element x is the number of times it occurs in an array.

An array is called good if the frequency of each element in this array is less than or equal to k.

Return the length of the longest good subarray of nums.

A subarray is a contiguous non-empty sequence of elements within an array.

Input: nums = [1,2,3,1,2,3,1,2], k = 2
Output: 6

Input: nums = [1,2,1,2,1,2,1,2], k = 1
Output: 2
*/

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
    int n=nums.size();
    map<int,int> mp;
      int i=0,j=0;
        int ans=0;
    while(i<n){
        mp[nums[i]]++;
       
        if(mp[nums[i]]<=k)
        {   ans=max(ans,i-j+1);
         
        }
        else{
           
            while(mp[nums[i]]!=k)
            {   mp[nums[j]]--;
                j++;
            }  
        }
         i++;
    }
        return ans;
    
    }

};
