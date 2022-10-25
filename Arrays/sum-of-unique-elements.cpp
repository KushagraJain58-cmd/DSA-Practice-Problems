/*                    LEETCODE PROBLEM: 1748
                       Sum of unique elements 
                   
https://leetcode.com/problems/sum-of-unique-elements/
  
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.
Return the sum of all the unique elements of nums.

Example 1:
Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.

Example 2:
Input: nums = [1,1,1,1,1]
Output: 0
Explanation: There are no unique elements, and the sum is 0.
*/
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       
        map<int,int> m;
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]==1)
            {
                sum+=nums[i];
            }
        }
        
        return sum;
    }
};
