#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],sum=0;
    int m,n,p,q,i,j,k;
    int *p1,*p2,*p3;
    p1=a;
    p2=b;
    p3=c;

    printf("Enter no of row and column for 1st matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter no of row and column for 2nd matrix\n");
    scanf("%d%d",&p,&q);

    if(n==p)
    {
        printf("For 1st matrix\n");
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            {
                printf("a[%d][%d]=",i,j);
                scanf("%d",p1+i*10+j);
            }

        printf("\nFor 2nd matrix\n");
        for(i=0;i<p;i++)
            for(j=0;j<q;j++)
            {
                printf("b[%d][%d]=",i,j);
                scanf("%d",ptr2+i*10+j);
            }


        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
               for(k=0;k<q;k++)
                 sum+=*(p1+i*10+k)**(p2+k*10+j);
            *(p3+i*10+j)=sum;
            sum=0;
            }
        }

        printf("Product of entered matrices :-\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
                printf("%d\t",*(p3+i*10+j));
            printf("\n");
        }
    }
    else
    printf("Multiplication is not possible");
    return 0;
}
