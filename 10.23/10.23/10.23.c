#include<stdio.h>
int countSeniors(char** details, int detailsSize//��ʾ����)
{
    int n, count = 0;
    for (n = 0; n < detailsSize; n++)
    {
        if ((details[n][11] - '0') > 6)//��-'0'���ַ�����ת��Ϊint����
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