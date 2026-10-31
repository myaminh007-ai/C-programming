#include <stdio.h>
int change(int a){
 a=5;
 return a;
}
int main(){
    int c=10;
    change(c);
    printf("The changed value is: %d\n", c);
    return 0;
} 