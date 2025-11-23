#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    long int lng;
    char b;
    float flt;
    double doubl;
    scanf("%d %ld %c %f %lf",&a,&lng,&b,&flt,&doubl);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",a,lng,b,flt,doubl);
    
    
    
    return 0;
}
