/*                    LEETCODE PROBLEM: 9
                      Palindrome Number
                      
https://leetcode.com/problems/palindrome-number/
  
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.
 
Example 1:
  Input: x = 121
  Output: true
  Explanation: 121 reads as 121 from left to right and from right to left.
*/
class Solution {
public:
    bool isPalindrome(int x) {
       
        if(x<0)
        {
            return false;
        }
        vector<int> rev;
        while(x)
        {
            rev.push_back(x%10);
            x=x/10;
        }
        int i=0;
        int j=rev.size()-1;
        
        while(i<j)
        {
            if(rev[i]!=rev[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
        
        // int rev=0;
        // while(x>0)
        // {
        //     int lastdigit=x%10;
        //     rev=rev*10+lastdigit;
        //     x=x/10;
        // }
        // if(rev==x)
        //     return true;
        // return false;
    }
};
