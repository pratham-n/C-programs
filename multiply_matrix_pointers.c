#include<stdio.h>

int main()
{
	int matrix1[20][20], matrix2[20][20], product[20][20];
	int *p1, *p2, *prod, m, n, p, q, d, e, f;
	p1= &matrix1[0][0];
	p2= &matrix2[0][0];
	prod= &product[0][0];

	printf("\nEnter the size (no of rows and columns) for 1st matrix :\n");
	scanf("%d %d", &m, &n);
	printf("\nEnter the size (no of rows and columns) for 2nd matrix :\n");
	scanf("%d %d", &p, &q);
	if(n==p)
	{
		printf("\nEnter the 1st matrix elements : \n");
		for(d=1;d<=m;++d)
			for(e=1;e<=n;++e)
				scanf("%d",p1+d*20+e);
		printf("\nEnter the 2nd matrix elements : \n\n");
		for(d=1;d<=p;++d)
			for(e=1;e<=q;++e)
				scanf("%d",p2+d*20+e);
		for(d=1;d<=m;++d)
			for(e=1;e<=q;++e)
				*(prod+d*20+e) = 0;
		for(d=1;d<=m;++d)
			for(e=1;e<=q;++e)
				for(f=1;f<=n;++f)
					*(prod+d*20+e) += *(p1+d*20+f) * *(p2+f*20+e);
		printf("\n\nThe Product of two matrices using Pointer is . . . \n\n");
		for(d=1;d<=m;++d){
			for(e=1;e<=q;++e)
				printf("\t %d", *(prod+d*20+e));
				printf("\n\n");
		}
	}
	else
	printf("\nThe Matrix sizes are not compatible for multiplication !!");
	getch();
	return 0;
}
