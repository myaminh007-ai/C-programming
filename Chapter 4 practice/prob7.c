#include <stdio.h>

int main(){
    int n;
    int prime=0;
    printf("Take your number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
         if( n%i == 0)
         {
             prime=1;
             break;
         }
        }
         
        if(prime)
        {
            printf("%d is not a prime number",n);
         }
        
        

        else
        {
            printf("%d is a prime number",n);
              
        }

    
    return 0;
    }