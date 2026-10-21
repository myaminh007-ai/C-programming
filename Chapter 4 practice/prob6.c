#include <stdio.h>

int main(){
long long n;
     long double sum=1;
     long long i=1;
    printf("Enter the value of n: ");
    scanf("%lld", &n);
       
    while(i<=n){
          sum*=i;
          i++;
    }

        
     printf("The factorial of %lld is: %lld\n", n, sum);

    return 0;
}