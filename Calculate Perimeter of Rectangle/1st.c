// Write a program to calculate perimeter of rectangle. Take sides, a & b from the user.

#include <stdio.h>

void main() {

    int length;
    int width;

    printf("Find the Parameter of Rectangle\n");

    printf("Enter the Length : ");
    scanf("%d" , &length);

    printf("Enter the Width : ");
    scanf("%d" , &width);

    printf("Parameter of Rectangle is : %d" , (length + width) * 2 );

}