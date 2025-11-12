/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *transformArray(int *nums, int numsSize, int *returnSize)
{
    int *modified = malloc(numsSize * 4);
    int even = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 == 0)
        {
            even += 1;
        }
    }
    for (int i = 0; i < even; i++)
    {
        modified[i] = 0;
    }
    for (int i = even; i < numsSize; i++)
    {
        modified[i] = 1;
    }
    *returnSize = numsSize;
    return modified;
}
