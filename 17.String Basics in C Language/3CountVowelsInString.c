#include<stdio.h>
int main() {
char str[100];
printf("enter your string: ");
fgets(str,100,stdin);
int i,count=0;
for(i=0;str[i]!='\0';i++)
{
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='O' || str[i]=='U')
    {
        count++;
    }
}
printf("%d vowels in your string.",count);
return 0;
}