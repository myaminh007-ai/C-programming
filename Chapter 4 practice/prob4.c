#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum=0;
for (int i = 1; i <=10; i++)
{
    sum+=i;
}

printf("The sum of 1st 10 numbers is: %d\n", sum);
return 0;
}