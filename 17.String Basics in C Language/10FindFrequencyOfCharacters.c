
#include <stdio.h>
int main()
{
    char s[1000];
    int freq[150] = {0};
    printf("Enter your string: ");
    gets(s);
    int i;
    for (i = 0; s[i]; i++)
    {
        freq[s[i]]++;
    }
    for (i = 0; i < 150; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c -> %d\n", i, freq[i]);
        }
    }
    return 0;
}