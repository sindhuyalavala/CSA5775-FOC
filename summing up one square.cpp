#include <stdio.h>
  
// Function to calculate the following series
int Series(int n)
{
    int i;
    int sums = 0;
    for (i = 1; i <= n; i++)
        sums += (i * i);
    return sums;
}
  
// Driver Code
int main()
{

