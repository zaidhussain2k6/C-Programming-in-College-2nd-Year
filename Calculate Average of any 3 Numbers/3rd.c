// Write a program to print the average of 3 numbers

#include <stdio.h>

int main() {
    
    int a,b,c;
    printf("Enter 3 Numbers to Find its Average  \n");

    printf("Enter First Number : ");
    scanf("%d" , &a);

    printf("Enter Second Number : ");
    scanf("%d" , &b);

    printf("Enter Third Number : ");
    scanf("%d" , &c);

    printf("%d" , (a + b + c) / 2);
}