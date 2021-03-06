/*                    LEETCODE PROBLEM: 1773
                       Count Items Matching a Rule 
                   
https://leetcode.com/problems/count-items-matching-a-rule/  
  
You are given an array items, where each items[i] = [typei, colori, namei]  describes the type, color, and name of the ith item You are also given a rule represented by two strings, ruleKey and ruleValue.
The ith item is said to match the rule if one of the following is true:

ruleKey == "type" and ruleValue == typei.
ruleKey == "color" and ruleValue == colori.
ruleKey == "name" and ruleValue == namei.
Return the number of items that match the given rule.

Example 1:
  Input: items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]], ruleKey = "color", ruleValue = "silver"
  Output: 1
  Explanation: There is only one item matching the given rule, which is ["computer","silver","lenovo"].
*/
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
     
        int count=0;
        
        for(int i=0;i<items.size();i++)
        {
                if(ruleKey=="type")
                {
                    if(items[i][0]==ruleValue)
                    {
                        count++;
                    }
                }
                if(ruleKey=="color")
                {
                    if(items[i][1]==ruleValue)
                    {
                        count++;
                    }
                }
                if(ruleKey=="name")
                {
                    if(items[i][2]==ruleValue)
                    {
                        count++;
                    }
                }
        }
        
        return count;
    }
};
