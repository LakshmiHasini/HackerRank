#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void split(int num){
    int a=num/100;
    int b=(num/10)%10;
    int c=num%10;
    
    printf("%d %d %d",a,b,c);
}

int main() {

    int a;
    scanf("%d",&a);
    split(a);
    
    return 0;
    
}
