#include<stdio.h>
void main()
{
    int a[50],count,c,n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    count=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                   c=1;
                   break;
            }
        }
         if(c==0)
         {
            count++;

         }

    }
    printf("\nThe number of prime numbers is %d",count);
}
