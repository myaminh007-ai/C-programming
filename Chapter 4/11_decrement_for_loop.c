#include <stdio.h>

int main(){
    int i;
    //here we are using a decrementing for loop to print numbers from 5 to 1
    // I can also use i!=0 or i>0
    for(i=500; i; i--){
        printf("%d\n",i);
    }
    return 0;
}