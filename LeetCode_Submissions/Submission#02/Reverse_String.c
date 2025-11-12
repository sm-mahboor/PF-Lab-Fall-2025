void reverseString(char *s, int sSize)
{
    char temp;
    int n = sSize / 2;
    for (int i = 0; i < n; i++)
    {
        temp = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize - i - 1] = temp;
    }
}
