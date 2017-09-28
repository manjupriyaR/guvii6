#include <stdio.h>
#include <conio.h>
 int main()
{
    int base, expo, counter, re= 1;
    printf("Enter base and expo \n");
    scanf("%d %d", &base, &expo);
    for(counter = 0; counter < expo; counter++){
        re = re * base;
    }
     
    printf("%d^%d = %d", base, expo, re);
    getch();
    return 0;
}
