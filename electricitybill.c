#include<stdio.h>
int main()
{
  char name[20];
  float unit,charge,total;

  printf("enter the name of the customer:\n");
  fgets(name,20,stdin);
  printf("enter the units consumed:\n");
  scanf("%f",&unit);
  charge=0;
  if(unit<=200)
  {
    charge=0.8*unit;
  }
  else if(unit>200&&unit<=300)
  {
    charge=(0.8*200)+(0.9*(unit-200));
  }
  else if(unit>300)
  {
    charge=(0.8*200)+(0.9*100)+(1.0*(unit-300));
  }
  total=charge+100;

  if(total>400)
  {
    total=total+(0.15*total);
  }
  printf("\nELECTRICITY BILL\n");
  printf("Name:%s\n",name);
  printf("No.of units consumed:%f\n",unit);
  printf("Total bill amount:%f\n\n",total);
  return 0;
}
