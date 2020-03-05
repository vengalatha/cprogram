#include <stdio.h>
void main()
{
int year;
printf("enter the year:\n");
scanf("%d",&year);
if(year%4==0)
{
printf("the year is leap year");
}
else
{
printf("year is not leap year");
}
}
