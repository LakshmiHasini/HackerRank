#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a,b;
    scanf("%c %c",&a,&b);
    if(a>b)
    {
        int res=a-b;
        printf("The distance between %c and %c is %d",a,b,res);
    }
    else
    {
        int res=b-a;
        printf("The distance between %c and %c is %d",a,b,res);
    }
    
     
    return 0;
}
