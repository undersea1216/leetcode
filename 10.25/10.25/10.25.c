#include<stdio.h>
//��дһ���������������ǽ�������ַ�����ת�����������ַ������ַ����� s ����ʽ������

//��Ҫ�����������������Ŀռ䣬�����ԭ���޸��������顢ʹ�� O(1) �Ķ���ռ�����һ���⡣

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


