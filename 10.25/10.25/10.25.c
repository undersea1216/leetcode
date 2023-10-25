#include<stdio.h>
//编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 s 的形式给出。

//不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。

//void reverseString(char* s, int sSize) {
//    int l = 0, r = sSize - 1;
//    while (l < r) {
//        s[l] ^= s[r]; 
//        s[r] ^= s[l]; 
//        s[l++] ^= s[r--];
//    }
//    return;
//}

void reverseString(char* s, int sSize)
{
    int i, x, tmp = 0;
    for (i = 0; i < sSize / 2; i++)
    {
        tmp = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize - 1 - i] = tmp;
    }
    for (x = 0; x < sSize ; x++)
        printf("%c", s[x]);
}
int main()
{
	int x, sSize = 5;
	char s[5] = { 'h','e','l','l','o' };
    reverseString(s, sSize);
    return 0;

}


