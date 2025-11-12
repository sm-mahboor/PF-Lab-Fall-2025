/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *runningSum(int *nums, int numsSize, int *returnSize)
{
    int *rSumArray = malloc(numsSize * 4);
    for (int i = 0; i < numsSize; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum += nums[j];
        }
        rSumArray[i] = sum;
    }
    *returnSize = numsSize;
    return rSumArray;
}
