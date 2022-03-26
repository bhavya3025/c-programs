include<stdio.h>
#include<math.h>
#define PI 3.142857
int main()
{
  int i;
  float x,degree,num,den,sum,term;
  printf("enter degree:");
  scanf("%f",&degree);
  x=(degree)*(PI/180.0);
  i=1;
  sum=x;
  num=x;
  den=1.0;
  term=x;
  do
  {
    i=i+2;
    num=-num*x*x;
    den=den*i*(i-1);
    term=num/den;
    sum=sum+term;
  }
  while(fabs(term)>=0.0001);
  printf("using inbuilt function sin(%.2f)=%.2f\n",degree,sin(x));
  printf("user computed value of sin(%.2f)=%.2f\n",degree,sum);
return 0;
}

