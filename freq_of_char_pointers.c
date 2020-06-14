#include <stdio.h>
#include <string.h>
 
int main()
{
	char s[1000];  
	int count=0, len;
 	printf("Enter  the string : ");
	gets(s);
	int i=0;     
	while((*(s+i))!='\0')
	{
		i++;	
	}
	len=i;
	printf("Frequency count character in string:\n");
 	for(int i=0; i<len; i++)  
	{
		count=1;
		if(*(s+i))
		{
			for(int j=i+1;j<len;j++)  
			{   
				if((*(s+i))==(*(s+j)))
				{
					count++;
					(*(s+j))='\0';
				}
			}  
			printf("'%c' = %d\n", (*(s+i)), count);
		}
	}
	return 0;
}
