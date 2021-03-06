/*                    LEETCODE PROBLEM: 1304
                    Find N Unique Integers Sum up to  Zero
                      
https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
  
Given an integer n return any array containin n  unique  integer such that they add up to 0.

Example 1
  Input: n = 5
  Output: [-7,-1,1,3,4]
  Explanation: Thes arrays also are accept [-5,-1,1,2,3] , [-3,-1,2,-2,4] .
*/
class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> arr;
        
        for(int i=1;i<=n/2;i++)
        {
            arr.push_back(i);
            arr.push_back(-i);
        }
        if(n%2!=0)
            {
                arr.push_back(0);
            }
        
        return arr;
    }
};
