#include<stdio.h>

int numTimesAllBlue(int* flips, int flipsSize) //有点不理解
{
    int n = flipsSize;
    int ans = 0, right = 0;
    for (int i = 0; i < n; ++i) 
    {
        right = fmax(right, flips[i]);//00000>00100>01100>01110
        if (right == i + 1) 
        {
            ++ans;
        }
    }
    return ans;
}

int main()
{
    int flips[5]={3,2,4,1,5};
    int flipsSize=5;
    int result=numTimesAllBlue(flips,flipsSize);
    printf("%d",result);
    return 0;
}