#include<stdio.h>
int main() {
char str[100];
printf("enter your string: ");
fgets(str,100,stdin);
int i,count=-1;
  for (i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
  int low=0,temp;
  int high= count-1;
  while(low<high)
  {  temp=str[low];
     str[low]=str[high];
     str[high]=temp;
     low++;
     high--;    
  }
  printf("%s",str);
return 0;
}