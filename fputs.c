#include <stdio.h>
int main ()
{
	FILE *fp;
	char str[100];
	printf("Enter string: \n");
	gets(str);
	fp = fopen("file.txt", "w");
	fputs("This is c programming.", fp);
 	fputs(str, fp);
 	printf("Successful");
	fclose(fp);
	return(0);
}
