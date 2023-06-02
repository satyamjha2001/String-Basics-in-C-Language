#include <stdio.h>
int main()
{
  char str[100], str1[100];
  printf("enter your string: ");
  fgets(str, 100, stdin);
  int i;
  for (i = 0; str[i] != '\0'; i++)
  {
    str1[i] = str[i];
  }
  printf("String copied in another string: %s", str1);
  return 0;
}