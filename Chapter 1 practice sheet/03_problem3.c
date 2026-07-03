#include <stdio.h>

int main(){
    // I took float as the data type for celsius because temperature can be in decimal points as well.
    float celsius;
    printf("Enter the temperature in celsius\n");
    scanf("%f", &celsius);
    printf("The temperature in fahrenheit is %f", (celsius*9/5)+32);
    return 0;
}