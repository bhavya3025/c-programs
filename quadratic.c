#include <math.h>
#include <stdio.h>
int main(void)
{
  float a,b,c,desc,r1,r2,realpart,imgpart;
printf("enter the coefficient of a b and c:");
scanf("%f%f%f",&a,&b,&c);
desc=(b*b)-(4.0*a*c);
if(a==0)
{
  printf("coefficient cant be 0\n");
  printf("please try again\n");
  return -1;
}
if(desc==0)
{
  printf("the roots are real and equal\n");
  r1=r2=(-b)/(2.0*a);
  printf("the two roots are r1=r2=%f\n",r1);
}
else if(desc>0)
{
  printf("the roots are real and distinct\n");
  r1=(-b+sqrt(desc))/(2.0*a);
  r2=(-b-sqrt(desc))/(2.0*a);
  printf("the roots are r1=%f Nd r2=%f\n",r1,r2);
}
else
{
  printf("the roots are imaginary\n");
  realpart=(-b)/(2.0*a);
  imgpart=sqrt(-desc)/(2.0*a);
  printf("the roots are r1=%f+i%f\n",realpart,imgpart);
  printf("r2=%f-i%f\n",realpart,imgpart);
}
return 0;
}

