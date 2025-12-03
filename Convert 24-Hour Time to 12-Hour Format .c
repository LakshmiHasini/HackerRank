#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 int main(){
    int hrs,min;
    scanf("%d %02d", &hrs, &min);
    if (hrs==12)
    {
      hrs=12;
      printf("%d:%02d PM", hrs, min);
    }
    else if(hrs==0)
    {
        hrs=12;
      printf("%d:%02d AM", hrs, min);
    }
    else if(hrs>12)
    {
        hrs=hrs-12;
      printf("%d:%02d PM", hrs, min);
    }
    else
    {
       printf("%d:%02d AM", hrs, min);
 
    }
  return 0;
}
