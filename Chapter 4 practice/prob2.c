#include <stdio.h>

int main(){
    int n=10;

    for (int i = 10; i>=1; i--)
    {
        printf("%d X %d = %d\n", n, i, i*n);
    }
    
    return 0;
}