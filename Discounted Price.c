#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float finalPrice(float price,float percent){
    float discountAmount = ( price * percent ) / 100;
    float discountedPrice = price - discountAmount;
    return discountedPrice;
}

int main() {

    float price,percent;
    scanf("%f %f",&price,&percent);
    printf("The final price is: %f",finalPrice(price,percent));
    return 0;
}
