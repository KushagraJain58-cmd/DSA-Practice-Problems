//                                       Find all numbers disappeared in the array
            
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/
  
// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]

// Example 2:
// Input: nums = [1,1]
// Output: [2]

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        const int N=1e6+2;   
        bool check[N];
        for(int i=1;i<N;i++)
            check[i]=false;
        for(int i=0;i<nums.size();i++)
        {
            check[nums[i]]=true;
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(check[i]==false)
            {
                ans.push_back(i);
                
            }
        }
        return ans;
    }
};
