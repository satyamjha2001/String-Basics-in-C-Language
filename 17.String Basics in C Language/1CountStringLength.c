#include <stdio.h>
int main()
{
    char str[100];
    int i, count = -1;
    printf("Enter a sentence:");
    fgets(str, 100, stdin);
    for (i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    printf("length of your sentence is: %d",count);
    return 0;
}