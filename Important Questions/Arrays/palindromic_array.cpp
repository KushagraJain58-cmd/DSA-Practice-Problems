/*                    Palindromic Array
                   
https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1?page=1&category[]=Arrays&curated[]=7&sortBy=submissions

Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome 
otherwise it will return 0.

Example 1:
Input:
5
111 222 333 444 555
Output:
1
Explanation:
A[0] = 111 //which is a palindrome number.
A[1] = 222 //which is a palindrome number.
A[2] = 333 //which is a palindrome number.
A[3] = 444 //which is a palindrome number.
A[4] = 555 //which is a palindrome number.
As all numbers are palindrome so This will return 1.

Example 2:
Input:
3
121 131 20
Output:
0
Explanation:
20 is not a palindrome hence the output is 0.
*/

#include<vector>

class Solution {
public:
    bool palindrom(int x)
    {
        if(x<0)
            return false;
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
                return false;
            i++;
            j--;
        }
        
        return true;
    }
    int PalinArray(int a[], int n)
    {
        bool check=0;
    	for(int i=0;i<n;i++)
    	{
    	  if(!palindrom(a[i]))
    	    return 0;
    	}
    	return 1;
    }
};
