#include<stdio.h>
#include<stdlib.h>

void copy(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}

void length(char *a)
{
	int len=0;
	while(*a!='\0')
	{
		len++;
		a++;
	}
	printf("The string length of string 1 is %d\n", len);
}

int compare(char *first, char *second)
{
   while(*first==*second)
   {
      if ( *first == '\0' || *second == '\0' )
         break;
 
      first++;
      second++;
   }
   if( *first == '\0' && *second == '\0' )
      return 0;
   else
      return -1;
}

void concatenate(char *a, char *b)
{
	while(*a)
	{
		a++;
	}
	while(*b)
	{
		*a= *b;
		b++;
		a++;
	}
	*a='\0';
}

int main()
{
	char aa[100], bb[100];
	int choice;
	printf("Enter the 1st string:\n");
	gets(aa);
	printf("Enter the 2nd string:\n");
	gets(bb);
	printf("Enter the choice:\n");
	printf("1. Concatentaion\n2. Comparison\n3. Length of 1st string\n4. Copy\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:	concatenate(aa, bb);
				printf("After concatenation: %s\n", aa);
				break;
		case 2: if(compare(aa, bb)==0)
					printf("The strings are equal\n");
				else
					printf("The strings are not equal\n");
				break;
		case 3: length(aa);
				break;
		case 4: copy(aa, bb);
				printf("The string 2 copied to string 1 is %s\n", aa);
				break;
		default: printf("Invalid choice!\n");
	}
	return 0;
}
