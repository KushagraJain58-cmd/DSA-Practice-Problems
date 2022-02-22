/*                    LEETCODE PROBLEM: 35
                       Search Insert Position
                   
https://leetcode.com/problems/search-insert-position/ 
  
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
  Input: nums = [1,3,5,6], target = 5
  Output: 2

Example 2:
  Input: nums = [1,3,5,6], target = 2
  Output: 1
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int idx=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target || nums[i]>target)
            {
                idx=i;
                break;
            }
            if(i==nums.size()-1 && nums[i]!=target)
            {
                idx=i+1;
                break;
            }
        }
        
        return idx;
    }
};
