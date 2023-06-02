#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, count = 0;
    printf("Enter your string: ");
    fgets(str, 100, stdin);
    printf("Enter a character to find it's occurrence: ");
    scanf("%c", &ch);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
     printf("%c is %d times\n",ch,count);
    return 0;
}
// int main()
// {
//     char s[100];
//     printf("Enter your string: ");
//     gets(s);
//     int occur[150]={0};
//     int i,j;
//     for(i=0;s[i]!='\0';i++)
//     {
//         occur[s[i]]++;
//     }
//     for(i=0;i<150;i++)
//     {
//         if(occur[i]>0)
//         {
//             printf("%c is %d times\n",i,occur[i]);
//         }
//     }
//     return 0;



// }