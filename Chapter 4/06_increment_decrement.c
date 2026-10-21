#include <stdio.h>

int main(){
    int i = 7;
    printf("The value of i is: %d\n", i);
    printf("The value is: %d\n", i++);
    printf("The value is: %d\n", ++i);
//i++ is a post increment operator,which print i first then increment
//++i is a pre increment operator,which increment i first then print
    return 0;
}
