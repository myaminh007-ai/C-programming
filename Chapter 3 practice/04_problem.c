#include <stdio.h>

int main(){
    char ch;
    printf("Enter your character:");
    scanf("%c", &ch);
    printf("\nThe value of ASCII is %d", ch);
if(ch>=97 && ch<=122){
    printf("\nThe character is lower case");
}
else{
    printf("\nThe character is not lower case");
} 




return 0;
}