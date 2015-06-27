#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  printf("Enter name please: ");
  string name = GetString();
  for (int i = 0, n = strlen(name); i < n; i++)
  {
    if (isalpha(name[i]) && (int)name[i-1] == 32)
    {
      printf("%c", toupper(name[i]));
    }
  }
  printf("\n");
}
