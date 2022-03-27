/*                    LEETCODE PROBLEM: 1464
                     Maximum Product of Two Elements in an Array
                      
https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
  
Given the array of integers nums, you will choose two different indices i and j of that array.
Return the maximum value of (nums[i]-1)*(nums[j]-1).
 
Example 1:
  Input: nums = [3,4,5,2]
  Output: 12 
  Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, 
  that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12. 
*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxpro=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int pro=0;
                pro=(nums[i]-1)*(nums[j]-1);
                maxpro=max(maxpro,pro);
            }
        }
        
        return maxpro;
    }
};

// class Solution {                         0ms 100%
//     public int maxProduct(int[] nums) {
//         int max1 = Integer.MIN_VALUE;
//         int max2 = max1;
        
//         for(int i =0; i<nums.length;i++){
//             if(max1<nums[i]){
//                 max2 = max1;
//                 max1 = nums[i];
//             } else if(max2<nums[i]){
//                 max2=nums[i];
//             }
//         }
        
//         return (max1-1)*(max2-1);
//     }
// }
