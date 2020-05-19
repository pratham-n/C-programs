#include<stdio.h>

int main()
{
	char fname[100];
	FILE *fp1;
	
	int id;
	char name[100];
	int phone;
	
	printf("Enter file name: ");
	scanf("%s",fname);
	
	fp1=fopen(fname,"w");
	
	if(fp1==NULL){
		printf("Error");
		return 0;
	}
	
	printf("Enter details: (Id 0 to exit)\n");
	while(1){
		printf("Id? ");
		scanf("%d",&id);
		if(id==0)
			break;
		printf("Name? ");
		scanf("%s",name);
		printf("Phone? ");
		scanf("%d",&phone);
		fprintf(fp1, "%d %s %d", id, name, phone);
	}
	
	fclose(fp1);
	printf("Successful");
	return 0; 
}
	
	
