/*
You a given a number N. You need to print the pattern for the given value of N.
for N = 2 the pattern will be 
2 2 1 1
2 1
for N = 3 the pattern will be 
3 3 3 2 2 2 1 1 1
3 3 2 2 1 1
3 2 1
*/
void printPat(int n)
{
//Your code here
   int k=n;
   while(k)
   {
       for(int i=n ;i>=1 ;i--)
       {
           for(int j=k ;j>=1 ;j--)
           {
               printf("%d ",i);
           }
       }
   printf("$");
       k--;
   }



}
