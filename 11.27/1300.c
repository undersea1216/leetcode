#include<stdio.h>
#include<math.h>

int findBestValue(int* arr, int arrSize, int target) //遍历
{                                                    //二分法不会
    int value,i,sum=0,differ=100000;
    for(value=0;value<target;value++)
    {
        for(i=0;i<arrSize;i++)                      //求value之后数组总和
        {
            if(value<=arr[i])
                sum+=value;
            else
                sum+=arr[i];
        }
        if(differ>abs(sum-target))                  //判断差值，因为differ带有拐点，找拐点就行
            differ=abs(sum-target);
        else
            return value-1;
        sum=0;
    }
}

int main()
{
    int arr[]={2,3,5};
    int arrSize=3;
    int target=10;
    int result=findBestValue(arr,arrSize,target);
    printf("%d",result);
    return 0;
}