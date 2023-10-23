#include<stdio.h>
int countSeniors(char** details, int detailsSize//表示几行)
{
    int n, count = 0;
    for (n = 0; n < detailsSize; n++)
    {
        if ((details[n][11] - '0') > 6)//用-'0'把字符数字转换为int类型
            count++;
        else if ((details[n][11] - '0') == 6 && (details[n][12] - '0') > 0)
            count++;
    }
    return count;
}

//int main()
//{
//    char details[1][15] = { "1313579440F2036", "2921522980M5644" };
//    int detailsSize = 30;
//    int a = countSeniors(details, detailsSize);
//    printf("%d", a);
//    return 0;
//
//}