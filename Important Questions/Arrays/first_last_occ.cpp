/*                    First and Last occurance of x
                   
https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?page=1&category[]=Arrays&curated[]=7&sortBy=submissions

Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in 
the given array.

Example 1:
Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last
             occurrence of 5 is at index 5. 
             
Example 2:
Input:
n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
Output:  6 6 

*/

int first_occ(int arr[], int n, int x, int i)
{
    if(i==n)
        return -1;
    if(arr[i]==x)
        return i;
    return first_occ(arr,n,x,i+1);
}

int last_occ(int arr[],int n, int x, int i)
{
    if(i==n)
        return -1;
    int rest_arr=last_occ(arr,n,x,i+1);
    if(rest_arr!=-1)
        return rest_arr;
    if(arr[i]==x)
        return i;
    return -1;
}

vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    ans.push_back(first_occ(arr,n,x,0));
    ans.push_back(last_occ(arr,n,x,0));
    
    return ans;
}
