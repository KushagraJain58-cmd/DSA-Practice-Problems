//                                         Longest Common Prefix in an Array
  
// https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1?page=1&category[]=Arrays&curated[]=7&sortBy=submissions
  
// Given a array of N strings, find the longest common prefix among all strings present in the array.


// Example 1:

// Input:
// N = 4
// arr[] = {geeksforgeeks, geeks, geek,
//          geezer}
// Output: gee
// Explanation: "gee" is the longest common
// prefix in all the given strings.
// Example 2:

// Input: 
// N = 2
// arr[] = {hello, world}
// Output: -1
// Explanation: There's no common prefix
// in the given strings.

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        unordered_map<int,char> mp;
        int count=arr[0].size();
        
        for(int i=0;i<arr[0].size();i++)
        {
            mp[i]=arr[0][i];
        }
        
        for(int i=1;i<N;i++)
        {
            string str=arr[i];
            int temp=0;
            for(int j=0;j<str.size();j++)
            {
                if(str[j]==mp[j])
                    temp++;
                else 
                    break;
            }
            count=min(count,temp);
        }
        
        if(count)
            return arr[0].substr(0,count);
        else
            return "-1";
    }
};
