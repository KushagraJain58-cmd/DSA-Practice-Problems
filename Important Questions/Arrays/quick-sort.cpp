/*                    Quick Sort
                   
https://practice.geeksforgeeks.org/problems/quick-sort/1

Quick Sort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position is low (the index of the array) and its ending position is high(the index of the array).
Note: The low and high are inclusive.
Implement the partition() and quickSort() functions to sort the array.

Example 1:
Input: 
N = 5 
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9

Example 2:
Input: 
N = 9
arr[] = { 2, 1, 6, 10, 4, 1, 3, 9, 7}
Output:
1 1 2 3 4 6 7 9 10
*/
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void swap(int arr[],int i,int j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    void quickSort(int arr[], int low, int high)
    {
        if(low>=high)
            return;
        if(low<high)
        {
            int pivot=partition(arr,low,high);
            quickSort(arr,low,pivot-1);
            quickSort(arr,pivot+1,high);
        }
    }
    int partition (int arr[], int low, int high)
    {
      int pivot=arr[high];
      int i=low-1;
      for(int j=low;j<high;j++)
      {
          if(arr[j]<pivot)
          {
              i++;
              swap(arr,i,j);
          }
      }
          swap(arr,i+1,high);  
          return i+1;      //i+1 is the index of pivot after sorting
    }
};
