#include <stdio.h>
int main()
{
    int n, k, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(k=2; k<=n/2; ++k)
    {
        if(n%k==0)
        {
            flag=1;
            break;
        }
    }
if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
    return 0;
}
