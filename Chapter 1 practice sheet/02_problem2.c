#include <stdio.h>

int main(){
    int r, height;
    printf("Enter the radidus of the circle\n");
    scanf("%d", &r);
    printf("Enter the height of the cylinder\n");
    scanf("%d", &height);

   printf("The area of this circle with radius %d is %f", r, 3.1416*r*r);
 printf("\nThe volume of this cylinder with radius %d and height %d is %f", r, height, 3.1416*r*r*height);   
 return 0;
} 