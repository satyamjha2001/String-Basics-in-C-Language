#include <stdio.h>
int main()
{
    char str[100];
    printf("enter your string: ");
    fgets(str, 100, stdin);
    int i, count = 0, count1 = 0, count2 = -1;
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("Number Of Alphabets = %d \nNumber Of Digits = %d\nNumber Of Special Character = %d", count, count1, count2);
    return 0;
}