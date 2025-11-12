void moveZeroes(int *nums, int numsSize)
{
    int temp[numsSize], k = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            temp[k] = nums[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        nums[i] = temp[i];
    }
    for (int i = k; i < numsSize; i++)
    {
        nums[i] = 0;
    }
}
