 #include <stdio.h>
 
 int main(){
    int mark1, mark2, mark3;
    printf("Enter mark1: ");
    scanf("%d", &mark1);
    printf("Enter mark2: ");
    scanf("%d", &mark2);
    printf("Enter mark3: ");
    scanf("%d", &mark3);
printf("\nThe marks are %d, %d and %d", mark1,mark2,mark3);
if(mark1<33 || mark2<33 || mark3<33){

    printf ("\nBete tu to fail hain mere jaan\n");}
    else if ((mark1+mark2+mark3)/3<40)
    {
        printf("\nBete tusse na ho paye ga\n");
    }
 else{
    printf("\nAww mere baccha pass ho gaya\n");
 }
    return 0;
 }