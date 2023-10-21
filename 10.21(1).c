#include <stdio.h>

//有一个自行车手打算进行一场公路骑行，这条路线总共由 n + 1 个不同海拔的点组成。自行车手从海拔为 0 的点 0 开始骑行。

//给你一个长度为 n 的整数数组 gain ，其中 gain[i] 是点 i 和点 i + 1 的 净海拔高度差（0 <= i < n）。请你返回 最高点的海拔 。

int largestAltitude(int* gain, int gainSize)
{
    int n;
    int tmp;
    int i;
    int a[1000] = { 0 };//如何生成一个可变大小的数组
    for (n = 0; n < gainSize; n++)//创建每一点海拔高度的数组
    {
        a[0] = 0;
        a[n+1] =a[n]+ gain[n];
    }
    for (i = 0; i < gainSize ; i++)//遍历找出数组的最大值
    {
        if (a[i] > a[i + 1])
        {
            a[i + 1] = a[i];
        }

    }
    tmp = a[gainSize];
    return tmp;
}
int main()
{
    int n;
    int gain[10] = {0};
    for(n=0;n<10;n++)
    { 
        scanf_s("%d", &gain[n]);
    }
    int gainSize = sizeof(gain)/sizeof(gain[0]);
    int high = largestAltitude(gain, gainSize);
    printf("%d", high);
    return 0;
}
//int largestAltitude(int* gain, int gainSize)
//{
//    int n;
//    int tmp;
//    for (n = 0; n < gainSize - 1; n++)
//    {
//        if (gain[n] > gain[n + 1])
//        {
//            gain[n + 1] = gain[n];
//        }
//
//    }
//    tmp = gain[gainSize - 1];
//    return tmp;
//} 