#include<stdio.h>
//�ڡ�Ӣ�����ˡ��������У���һ���� ����Ī�� ��Ӣ�ۡ����Ĺ��������õз�Ӣ�۰�ϣ������ע���������֣������ж�״̬��
//
//����Ī������ϣ����ϣ���ж�״̬���ó��� duration �롣
//
//��ʽ�ؽ�����Ī�� t ���𹥻���ζ�Ű�ϣ��ʱ������[t, t + duration - 1]���� t �� t + duration - 1�������ж�״̬�������Ī���ж�Ӱ����� ǰ �ٴι������ж�״̬��ʱ������ ���� �����µĹ���֮���ж�Ӱ�콫���� duration ��������
//
//����һ�� �ǵݼ� ���������� timeSeries ������ timeSeries[i] ��ʾ��Ī�� timeSeries[i] ��ʱ�԰�ϣ���𹥻����Լ�һ����ʾ�ж�����ʱ������� duration ��
//
//���ذ�ϣ�����ж�״̬�� �� ������
int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration)
{
    int i = 0, seconds = 0;
    for (i = 0; i <= timeSeriesSize - 2; i++)//ѭ���ж���һ�ι���ʱ���ж��Ƿ��ѽ���
    {
        if (timeSeries[i + 1] > (timeSeries[i] - 1 + duration))//-1��Ϊ����ʱ�����Ϲ���ʱ����һ��
            seconds += duration;
        else
            seconds += timeSeries[i + 1] - timeSeries[i];
    }
    return seconds + duration;//��Ϊ���һ�ι���Ҳ���ж��������ټ�һ�γ���ʱ��
}
int main()
{
    int timeSeries[] = { 1,2,3,4,5 };
    int timeSeriesSize = 5;
    int duration = 5;
    int a = findPoisonedDuration(timeSeries,timeSeriesSize,duration);
    printf("%d", a);
    return 0;
}