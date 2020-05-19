#include<stdio.h>

int main()
{
	char fname[100], ch;
	FILE *fp1, *fptemp;
	
	printf("Enter file name: ");
	scanf("%s",fname);
	
	fp1=fopen(fname,"w");
	fptemp=fopen("temp.txt","r");
	
	if(fp1==NULL||fptemp==NULL){
		printf("Error");
		return 0;
	}
	
	while((ch=fgetc(fptemp))!=EOF){
		ch=ch-100;
		fputc(ch,fp1);
	}
			
	printf("File successfully decrypted");
	fclose(fp1);
	fclose(fptemp);
	return 0; 
}
	
	
