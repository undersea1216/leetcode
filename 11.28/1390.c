#include<stdio.h>
#include<math.h>

/* int sumFourDivisors(int* nums, int numsSize) //初版，
{
    int i,j,count,z;
    long int arr[4];
    long int sum=0;
    for(i=0;i<numsSize;i++)//nums遍历
    {
        count=0;
        for(j=1;j<=sqrt(nums[i]);j++)//遍历除余
        {
            if(nums[i]%j==0)
            {  
                if(j!=(nums[i]/j))
                {
                    count+=2;
                    if(count<=4)
                    {
                    arr[count-2]=j;
                    arr[count-1]=nums[i]/j;
                    }
                }    
                else
                {
                    count++;
                }
       
            }          
        }
        if(count==4)
        {
            for(z=0;z<4;z++)
                sum+=arr[z];
        }
    }
    return sum;
} */
int sumFourDivisors(int* nums, int numsSize) //改进版，
{
    int i,j,count,z;
    long int arr[2];
    long int sum=0;
    for(i=0;i<numsSize;i++)//nums遍历
    {
        count=2;
        for(j=2;j<=sqrt(nums[i]);j++)//遍历除余
        {
            if(nums[i]%j==0)
            {  
                if(j!=(nums[i]/j))
                {
                    count+=2;
                    if(count<=4)
                    {
                    arr[count-4]=j;
                    arr[count-3]=nums[i]/j;
                    }
                } 
                else
                    count++;
       
            }          
        }
        if(count==4)
        {
                sum+=(arr[0]+arr[1]+1+nums[i]);
        }
    }
    return sum;
}

int main()
{
    int nums[]={21,4,7};
    int numsSize=3;
    int result=sumFourDivisors(nums,numsSize);
    printf("%d",result);
}