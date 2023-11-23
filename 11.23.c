#include <stdio.h>

int xorOperation(int n, int start) 
{
    int nums[n];
    int i,consult=0;
    for(i=0;i<n;i++)
    {
        nums[i]=start+2*i;
        consult^=nums[i];
    }    
    return consult;
}

int main()
{
    int n=5,start=0;
    int consult=xorOperation(n,start);
    printf("%d",consult);
}