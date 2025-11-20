#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int toSeconds(int hours, int minutes, int seconds)
{
    int total= hours*60*60+minutes*60+seconds;
    return total;
}
int main() {
    int hrs,min,sec;
    scanf("%d %d %d",&hrs,&min,&sec);
    printf("Total seconds: %d",toSeconds(hrs,min,sec));
       
    return 0;
}
