/*                    LEETCODE PROBLEM: 1295
                     Find Numbers with Even Number of Digits
                      
https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
  
Given an array nums of integers, return how many of them contain an even number of digits.

Example 1:
  Input: nums = [12,345,2,6,7896]
  Output: 2
  Explanation: 
  12 contains 2 digits (even number of digits). 
  345 contains 3 digits (odd number of digits). 
  2 contains 1 digit (odd number of digits). 
  6 contains 1 digit (odd number of digits). 
  7896 contains 4 digits (even number of digits). 
  Therefore only 12 and 7896 contain an even number of digits.
*/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
//         int countdig=0;
//         int ans=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             while(nums[i]>0)
//             {
//                 // int lastdigit=nums[i]%10;
//                 countdig++;
//                 nums[i]/=10;
//             }
//             if(countdig%2==0)
//             {
//                ans++; 
//             }
//         }
        
//         return ans;
        
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            string str=to_string(nums[i]);
            if(str.length()%2==0)
            {
                ans++;
            }
        }
        
        return ans;
    }
};
