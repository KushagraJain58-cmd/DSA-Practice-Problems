/*                    LEETCODE PROBLEM: 2108
                      Find First Palindromic String in the Array
                   
https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
  
Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".
A string is palindromic if it reads the same forward and backward.

Example 1:
  Input: words = ["abc","car","ada","racecar","cool"]
  Output: "ada"
  Explanation: The first string that is palindromic is "ada".
  Note that "racecar" is also palindromic, but it is not the first.
*/
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        string ans;
        for(int i=0;i<words.size();i++)
        {
            ans=words[i];
            reverse(words[i].begin(),words[i].end());
            if(ans==words[i])
            {
                return ans;
            }
        }
        
        return "";
    }
};
