#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    if(N>=1){
        if(!(N%2) && N>15 && !(N%3) && !(N%7)){
       printf("The verdict for the number %d is: SUPERNATURAL",N);  

        }
        else if(!(N%2) && N>10){
            if(N>15 && !(N%3)){
                printf("The verdict for the number %d is: MIRACULOUS",N);
            }
            else if(!(N%7)){
                printf("The verdict for the number %d is: MIRACULOUS",N);
            }
            else{
                printf("The verdict for the number %d is: MAGICAL",N);
            }
        }
        else if(N>15 && !(N%3)){
            if(!(N%7)){
                printf("The verdict for the number %d is: MIRACULOUS",N);
            }
            else{
                printf("The verdict for the number %d is: MAGICAL",N);
            }
        }
        else if(!(N%7)){
                printf("The verdict for the number %d is: MAGICAL",N);
        }
        else{
            printf("The verdict for the number %d is: NORMAL",N);
        }
    }
    else{
        printf("The verdict for the number %d is: INVALID",N);
    }
    
    return 0;
}
