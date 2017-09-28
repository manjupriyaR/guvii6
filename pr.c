#include <stdio.h>
int main()
{
    int n, reInteger = 0, re, orInteger;

    printf("Enter an integer: ");
    scanf("%d", &n);

    orInteger = n;
    while( n!=0 )
    {
        remainder = n%10;
        reInteger = reInteger*10 + re;
        n /= 10;
    }
    if (orInteger == reInteger)
        printf("%d is a palindrome.", orInteger);
    else
        printf("%d is not a palindrome.", orInteger);
    
    return 0;
}
