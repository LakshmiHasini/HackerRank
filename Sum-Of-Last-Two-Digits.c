#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumLastDigits(int a, int b)
{
    int sum=a%10+b%10;
    return sum;
}

int main() {

 int a,b;
    scanf("%d %d",&a,&b);
    int res= sumLastDigits(a,b);
    printf("The sum of last digits is: %d",res);
    return 0;
}
