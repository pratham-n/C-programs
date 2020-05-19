#include<stdio.h>

int main()
{
	char fname[100], ch, d;
	FILE *fp1, *fptemp;
	
	printf("Enter file name: ");
	scanf("%s",fname);
	
	fp1=fopen(fname,"r");
	fptemp=fopen("temp.txt","w");
	
	if(fp1==NULL||fptemp==NULL){
		printf("Error");
		return 0;
	}
	
	while((ch=fgetc(fp1))!=EOF){
		ch=ch+100;
		fputc(ch,fptemp);
	}
	
	fclose(fp1);
	fclose(fptemp);
	
	fp1=fopen(fname,"w");
	fptemp=fopen("temp.txt","r");
	
	while((d=fgetc(fptemp))!=EOF){
		fputc(d, fp1);
	}
	
	printf("File successfully encrypted");
	fclose(fp1);
	fclose(fptemp);
	return 0; 
}
	
	
