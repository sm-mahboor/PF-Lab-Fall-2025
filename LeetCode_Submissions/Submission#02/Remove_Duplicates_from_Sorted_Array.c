int removeDuplicates(int *nums, int numsSize)
{
    int last, k = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (i == 0)
        {
            last = nums[i];
            k++;
        }
        else
        {
            if (nums[i] != last)
            {
                nums[k++] = nums[i];
                last = nums[i];
            }
        }
    }
    return k;
}
