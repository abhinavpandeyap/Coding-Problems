/*
You are given an array A of size N. You need to print elements of A in alternate order (starting from index 0).

Example 1:

Input:
N = 4
A[] = {1, 2, 3, 4}
â€‹Output:
1 3
Example 2:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
â€‹Output:
1 3 5
*/
void print(int ar[], int n)
{
    
    // code here
    
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        cout<<ar[i]<<" ";
    }
}
