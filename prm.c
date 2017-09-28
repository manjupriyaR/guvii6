  #include<stdio.h>
   int main()
{
                 int n, num1, num2, k, rm;
                 printf("\n Enter any two Numbers : ");
                 scanf("%d %d",&num1,&num2);
                 printf("\n\n The Prime Numbers between the given Two Intervals are \n ");
                 for(n=num1; n<=num2; ++n)
                 {
                  rm=0;
                  for(k=2;k<=n/2;k++)
{
                  if((n % k) == 0)
{
                  rm++;
                  break;
                  }
                  }
                  if(rm==0)
                  printf("\n %d ", n);
                  }
                  getch();
   return 0;
