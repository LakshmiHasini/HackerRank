#include <stdio.h>

int main() {
    double income,tax;
    scanf("%lf", &income);
       int flag=0;
    if (income>=0) {
        if (income<=250000) {
        tax = 0;
        }
        else if (income<=500000) {
            tax = (income-250000)*0.05;
        }
        else if (income<=1000000) {
            tax = 250000*0.05 + (income-500000)*0.20;
        }
        else { 
            tax = 250000*0.05 + 500000*0.20 + (income-1000000)*0.30;
        }
    }
    else{
        flag=1;
    }
    if(flag==0){
       printf("%.2f", tax); 
    }
    else{
        printf("INVALID");
    }

    return 0;
}
