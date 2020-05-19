#include<stdio.h>

int main()
{
	char fname[100], ch;
	FILE *fp1;
		
	printf("Enter file name: ");
	scanf("%s",fname);
	
	fp1=fopen(fname,"r");
	
	if(fp1==NULL){
		printf("Error");
		return 0;
	}
	
	while(1){
		ch=fgetc(fp1);
		if(feof(fp1)){
			printf("End of file\n");
			break;
		}
		printf("%c", ch);
	}
			
	fclose(fp1);
	printf("Successful");
	return 0; 
}
	
	
