#include <stdio.h>
int main()
{
    char str[500],temp;
    int i, j;
    printf("Enter your string: ");
    gets(str);
    for (i = 0; str[i]; i++)
    {
        for (j = i + 1; str[j]; j++)
        {
            if (str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);
    return 0;
}