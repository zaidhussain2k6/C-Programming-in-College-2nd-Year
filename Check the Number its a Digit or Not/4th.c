// Write a program to check if given character is digit or not
#include <stdio.h>

void main() {

    int a;

    printf("Enter any Number : ");
    scanf("%d" , &a);

    if (a>=0 , a<=9)
    {
        printf("Yes this Number is Digit");
    }
    else{
        printf("This Number is not Digit");
    }
}