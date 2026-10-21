#include <stdio.h>

int main(){
int n;
     long long sum=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n;i++){
       
    
            sum*=i;
        
       
    }
     printf("The factorial of %d is: %lld\n", n, sum);

    return 0;
}