#include<stdio.h>
#include<math.h>
int main()
{
        float a[10],sum=0,mean=0,var=0,sd=0;
        float *p;
        p=&a[0];
        int i,n;
        printf("enter the value of n\n");
        scanf("%d",&n);
        printf("\nenter the elements:\n");
        for(i=0;i<n;i++)
        {
                scanf("%f",p);
                p++;
        }
        p=&a[0];
        for(i=0;i<n;i++)
        {
          sum=sum+*p;
          p++;
        }
        mean=sum/n;
        for(i=0;i<n;i++)
        {
          var=var+pow(mean-(*p),2);
          p++;
        }
        var=var/n;
        sd=sqrt(var);
        printf("sum=%f\nmean=%f\nvariance=%f\nstandard deviation=%f\n",sum,mean,var,sd);
        return 0;
}