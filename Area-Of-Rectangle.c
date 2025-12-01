#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int area(int length, int width)
{
    int res=length*width;
    return res;
    
}

int main() {
    
    int length, width;
    scanf("%d %d",&length,&width);
    int total= area(length,width);
    printf("The area is: %d units",total);
    return 0;
}
