#include<stdio.h>

main()
{
    ///this part if for setting variable
    int num1, num2, num3, sum, sub, div, multi;

    ///this part is for taking input
    printf("enter 3  number: \n");
    scanf("%d %d %d", &num1, &num2, &num3);


    ///this part is for summation
    sum=num1+num2+num3;
    printf("The Summation is: %d \n\n",sum);

    ///This part is for the subtraction
    sub=num1-num2-num3;
    printf("The subtraction is: %d \n\n", sub);

    ///This part is for multiplication
    multi=num1*num2*num3;
    printf("The multiplication is: %d \n\n", multi);

    ///This part is for division
    div=num1/num2;
    printf("The Division of first two number is %d \n\n", div);


return 0;
}
