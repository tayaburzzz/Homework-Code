#include<stdio.h>
main()
{
    int num1, num2, num3,sum;
    printf("enter 1st Input: ");
    scanf("%d", &num1);
    printf("enter 2nd Input:");
    scanf("%d", &num2);
    //printf("enter 3rd Input:");    // why it is not taking the 3rd input
    //printf("%d", &num3);
    //printf("%d,%d and %d.", num1, num2, num3);

    sum=num1+num2;
    printf("%d",sum);

}
