#include<stdio.h>

////�������ڴ������������ numExchange ����ˮƿ�ӳ��жһ�һƿˮ���ʼ����һ�������� numBottles ƿˮ��
//
//����ȵ���ˮƿ�е�ˮ����ôˮƿ�ͻ��ɿյġ�
//
//������������ numBottles �� numExchange �������� ��� ���Ժȵ�����ƿˮ��
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