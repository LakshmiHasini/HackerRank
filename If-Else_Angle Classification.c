#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int deg;
    scanf("%d",&deg);
    int angle=deg%360;
    if(deg==0){
        printf("Acute Angle");
    }
    else{
        if (angle==0) {
        printf("Full Rotation");
        }
        else if (angle<90) {
            printf("Acute Angle");
        }
        else if (angle==90) {
            printf("Right Angle");
        }
        else if (angle<180) {
            printf("Obtuse Angle");
        }
        else if (angle==180) {
            printf("Straight Angle");
        }
        else {
            printf("Reflex Angle");
        }
    }
    return 0;
}
