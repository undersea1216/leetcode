#include <stdio.h>

//��һ�����г��ִ������һ����·���У�����·���ܹ��� n + 1 ����ͬ���εĵ���ɡ����г��ִӺ���Ϊ 0 �ĵ� 0 ��ʼ���С�

//����һ������Ϊ n ���������� gain ������ gain[i] �ǵ� i �͵� i + 1 �� �����θ߶Ȳ0 <= i < n�������㷵�� ��ߵ�ĺ��� ��

int largestAltitude(int* gain, int gainSize)
{
    int n;
    int tmp;
    int i;
    int a[1000] = { 0 };//�������һ���ɱ��С������
    for (n = 0; n < gainSize; n++)//����ÿһ�㺣�θ߶ȵ�����
    {
        a[0] = 0;
        a[n+1] =a[n]+ gain[n];
    }
    for (i = 0; i < gainSize ; i++)//�����ҳ���������ֵ
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