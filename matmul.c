#include<stdio.h>
int main()
{
        int a[20][20],b[20][20],c[20][20],i,j,k,p,q,n,m;
        printf("enter order of the matrix1:\n");
        scanf("%d%d",&m,&n);
        printf("enter order of the matrix2:\n");
        scanf("%d%d",&p,&q);
        if(n!=p)
        {
                printf("matrix multiplication is not possible\n");
                return 1;
        }
        printf("enter the elements of matrix1:\n");
         for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                   scanf("%d",&a[i][j]);
                 }  
        } 
        printf("enter the elements of matrix2:\n");
         for(i=0;i<p;i++)
        {
                for(j=0;j<q;j++)
                {
                   scanf("%d",&a[i][j]);
                 } 
         } 
         for(i=0;i<n;i++)
         {
            for(j=0;j<q;j++)
            {
               c[i][j]=0;
               for(k=0;k<p;k++)
               {
                 c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
               }
             }
          }
          printf("resultant matrix\n");
          for(i=0;i<n;i++)
          {
             for(j=0;j<q;j++)
             {
                printf("%d\t",c[i][j]);
             }
           printf("\n");
          }
          return 0;
}
                
                                      
       
        
