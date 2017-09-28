#include<stdio.h>
#include<conio.h>
int main()
{
int num,count=0;
printf("enter a number");
scanf("%d",&num);
while (num)
{
num=num/10;
count++;
}
printf("total digit is :%d,count");
return 0;
}
