#include<stdio.h>
#include<malloc.h>
#include<Stdbool.h>
bool isPalindrome(int x)
{
    int n;
    int count = 0;
    int y = x;
    int j;
    int z;
    int a = 0;
    if (x < 0)
        return 0;
    while (y != 0)
    {
        y = y / 10;
        count++;
    }
    int* p;
    p = (int*)malloc(count * sizeof(int));
    for (n = 0; n < count; n++)
    {
        j = x % 10;
        x = x / 10;
        p[n] = j;
    }
    for (z = 0; z < (count / 2); z++)
    {
        if (p[z] == p[count - 1 - z])
            a++;
    }
    free(p);
    if (a == (count / 2))
        return 1;
    else
        return 0;
}
int main()
{
    int x;
    scanf_s("%d", &x);
    bool a =isPalindrome(x);
    if(a==1)
        printf("true");
    else
        printf("false");
    return 0;
}