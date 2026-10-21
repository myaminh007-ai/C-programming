    #include <stdio.h>
    
    int main(){
        for(int i=0; i<=15; i++){
            if(i==5){ //it exits the loop here
              printf("%d\n",i);
                break;
               // continue; //it skips itration here
            }
           printf("%d\n",i);
        }

        return 0;
    }