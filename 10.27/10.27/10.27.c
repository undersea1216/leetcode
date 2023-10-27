#include<stdio.h>

////超市正在促销，你可以用 numExchange 个空水瓶从超市兑换一瓶水。最开始，你一共购入了 numBottles 瓶水。
//
//如果喝掉了水瓶中的水，那么水瓶就会变成空的。
//
//给你两个整数 numBottles 和 numExchange ，返回你 最多 可以喝到多少瓶水。
int numWaterBottles(int numBottles, int numExchange)
{
    int all = 0;
    int b = 0;
    all = numBottles;
    b = numBottles;
    while (b >= numExchange)
    {
        b = b - numExchange + 1;
        all++;
    }
    return all;
}
int main()
{
    int numBottles = 9, numExchange = 3;
    int all = numWaterBottles(numBottles, numExchange);
    printf("%d", all);
    return 0;
}