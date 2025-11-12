

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *shuffle(int *nums, int numsSize, int n, int *returnSize)
{
    int *shuffled = malloc(numsSize * 4);
    for (int i = 0, j = n, k = 0; i < n; i++, j++)
    {
        shuffled[k] = nums[i];
        shuffled[++k] = nums[j];
        k++;
    }
    *returnSize = numsSize;
    return shuffled;
}
