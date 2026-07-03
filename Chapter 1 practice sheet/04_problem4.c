#include <stdio.h>

int main(){
    int principle,year;
    float rate;
    printf("enter the principle amount\n");
    scanf("%d", &principle);
    
    printf("enter the number of years\n");
    scanf("%d", &year);
    
        //Interest can be in decimals
    printf("enter the rate of interest\n");
    scanf("%f", &rate);
    printf("The Interest is %f", (principle*rate*year)/100);
    return 0;
}