#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    double res;  
    int flag = 0;    
    if(n>=0){
            if(n<=100){
             res=n*5;
            }
            else if(n<=300){
                 res = 100*5 + (n-100)*7;
            }
            else {
                res = 100 * 5 + 200 * 7 + (n - 300) * 10;
            }
             if (res<=1200) {
                res -= res*0.10;
            }
    
    }
    else{
       flag=1;
    }
    if(flag==0){
        printf("The electricity bill is: %.2f.",res);
    }
    else{
        printf("Invalid Input!");
    }
    return 0;
}
