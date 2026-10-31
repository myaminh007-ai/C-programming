#include <stdio.h>
int sum(int a, int b){
    return a + b;
}
int main(){
    int result = sum(5, 3);
    int c = sum(10, 20);
    printf("The sum is: %d\n", result);
    printf("The sum is: %d\n", c);
    return 0;
}