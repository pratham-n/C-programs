#include<stdio.h>
#include <string.h>

int main()
{
   char str[100];
   int i = 0, count[26] = {0}, x;

   printf("Enter the  string\n");
   gets(str);

   while (*(str+i) != '\0') {

      if (*(str+i) >= 'a' && *(str+i) <= 'z') {
         x = *(str+i) - 'a';
         (*(count+x))++;
      }

      i++;
   }

   for (i = 0; i < 26; i++)
         printf("%c occurs %d times in the string.\n", i + 'a', *(count+i));

   return 0;
}
