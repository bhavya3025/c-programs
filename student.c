#include<stdio.h>
int main()
{
struct student 
{
  char usn[10];
  char name[10];
  int sem;
  float m1,m2,m3,m4,m5,avg;
};
struct student s[10];
int i,n;
printf("ENTER THE NUMBER OF STUDENT RECORDS:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("STUDENT USN\n");
  scanf("%s",s[i].usn);
  printf("STUDENT NAME\n");
  scanf("%s",s[i].name);
  printf("ENTER SEMESTER\n");
  scanf("%d",&s[i].sem);
  printf("ENTER 5 SUBJECT MARKS\n");
  scanf("%f%f%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
}
for(i=0;i<n;i++)
{
  s[i].avg=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5.0;
}
printf("students scored above avg");
printf("\nUSN\tSTUDENT NAME\tAVERAGE");
for(i=0;i<n;i++)
{
  if(s[i].avg>50.0)
  {
    printf("\n%s\t%s\t%f",s[i].usn,s[i].name,s[i].avg);
  }
}
for(i=0;i<n;i++)
{
  if(s[i].avg<50.0)
  {
    printf("\n%s\t%s\t%f",s[i].usn,s[i].name,s[i].avg);
  }
}
return 0;
}

  
  



