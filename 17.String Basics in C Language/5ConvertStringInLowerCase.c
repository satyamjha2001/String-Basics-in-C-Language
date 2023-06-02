#include<stdio.h>
int main() {
char str[100];
printf("enter your string: ");
fgets(str,100,stdin);
int i;
for(i=0;str[i]!='\0';i++)
{
    if(str[i]>='A' && str[i]<='Z')
    {
        str[i]+=32;
    }
}
printf("%s",str);
return 0;
}