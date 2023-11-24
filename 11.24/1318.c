#include<stdio.h>
/* 给你三个正整数 a、b 和 c。

你可以对 a 和 b 的二进制表示进行位翻转操作，返回能够使按位或运算   a OR b == c  成立的最小翻转次数。

「位翻转操作」是指将一个数的二进制表示任何单个位上的 1 变成 0 或者 0 变成 1 。 */
int minFlips(int a, int b, int c)
{
    int ans=0;
    int i;
    for(i=0;i<31;i++)
    {
        int bit_a=(a>>i)&1;
        int bit_b=(b>>i)&1;
        int bit_c=(c>>i)&1;
        if(bit_c == 1)
        {
            if(bit_a == 0 && bit_b == 0)
            ans++;
        }
        else
        {
            if(bit_a == 1 || bit_b == 1)
            ans++;
            if(bit_a == 1 && bit_b == 1)
            ans++;
        }
    }
    return ans;
}

int main()
{
    int a=2;//0010
    int b=6;//0110
    int c=5;//0101
    int ans=minFlips(a,b,c);
    printf("%d",ans);
    return 0;
}