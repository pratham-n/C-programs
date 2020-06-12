#include<stdio.h>
#include<stdlib.h>

int main()
{
   FILE *fp;
   char str[1000];
   char ch;
   int num;
   long length;

   fp= fopen("test.txt","w");
   if (fp == NULL) {
      puts("Cannot open this file\n");
      exit(1);
   }
   printf("Enter the data to read to the file:\n");
   gets(str);
   fputs(str, fp);
   fclose(fp);

   fp = fopen("test.txt", "r");
   if (fp == NULL) {
      puts("Cannot open this file\n");
      exit(1);
   }

   printf("Enter the number of bytes from the end you want to read:\n");
   scanf("%d",&num);
   fseek(fp, 0, SEEK_END);
   length = ftell(fp);
   fseek(fp, (length - num), SEEK_SET);

   printf("The last %d bytes of the file are:\n", num);
   while(ch!=EOF)
   {
      ch= fgetc(fp);
      putchar(ch);
   }

   fclose(fp);
   return(0);
}
