#include<stdio.h>
int minNumber(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int i, j,a,b, x, y, z=0, tmp = 0;
    for (a = 0; a < nums1Size; a++)
    {
        for (x = 0; x < nums1Size - a-1; x++)
        {
            if (nums1[x] > nums1[x + 1])
            {
                tmp = nums1[x + 1];
                nums1[x + 1] = nums1[x];
                nums1[x] = tmp;
            }
        }
    }
    for (b = 0; b < nums2Size; b++)
    {
        for (y = 0; y < nums2Size - b - 1; y++)
        {
            if (nums2[y] > nums2[y + 1])
            {
                tmp = nums2[y + 1];
                nums2[y + 1] = nums2[y];
                nums2[y] = tmp;
            }
        }
    }

    for (i = 0; i < nums1Size; i++)
    {
        for (j = 0; j < nums2Size; j++)
        {
            if (nums1[i] == nums2[j])
            {
                z = nums1[i];
                return z;
            }
        }
    }

    if (nums1[0] < nums2[0])
        return  nums1[0] * 10 + nums2[0];
    else
        return nums2[0] * 10 + nums1[0];
}

int main()
{
    int nums1[] = {3,8,4,2,6,1};
    int nums2[] = {4,7,8,5,2,3,6};///
    int nums1Size = 6;
    int nums2Size = 7;
    int a = minNumber(nums1, nums1Size, nums2, nums2Size);
    printf("%d", a);
    return 0;
    /*nums1 =
        [3, 5, 2, 6]
    nums2 =
        [3, 1, 7]*/
}