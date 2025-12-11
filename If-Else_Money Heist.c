#include <stdio.h>

int main() {

    int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
    int i1,i2,i3;
    int s1,s2,s3;
    scanf("%d %d %d %d %d %d %d %d %d %d ",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
    scanf("%d %d",&i1,&s1);
    scanf("%d %d",&i2,&s2);
    scanf("%d %d",&i3,&s3);
    
    if (i1==0)n0=(n0+s1)%10;
    else if(i1==1) n1=(n1+s1)%10;
    else if(i1==2) n2=(n2+s1)%10;
    else if(i1==3) n3=(n3+s1)%10;
    else if(i1==4) n4=(n4+s1)%10;
    else if(i1==5) n5=(n5+s1)%10;
    else if(i1==6) n6=(n6+s1)%10;
    else if(i1==7) n7=(n7+s1)%10;
    else if(i1==8) n8=(n8+s1)%10;
    else if(i1==9) n9=(n9+s1)%10;
    
    if (i2==0)n0=(n0+s2)%10;
    else if(i2==1) n1=(n1+s2)%10;
    else if(i2==2) n2=(n2+s2)%10;
    else if(i2==3) n3=(n3+s2)%10;
    else if(i2==4) n4=(n4+s2)%10;
    else if(i2==5) n5=(n5+s2)%10;
    else if(i2==6) n6=(n6+s2)%10;
    else if(i2==7) n7=(n7+s2)%10;
    else if(i2==8) n8=(n8+s2)%10;
    else if(i2==9) n9=(n9+s2)%10;
    
    if (i3==0)n0=(n0+s3)%10;
    else if(i3==1) n1=(n1+s3)%10;
    else if(i3==2) n2=(n2+s3)%10;
    else if(i3==3) n3=(n3+s3)%10;
    else if(i3==4) n4=(n4+s3)%10;
    else if(i3==5) n5=(n5+s3)%10;
    else if(i3==6) n6=(n6+s3)%10;
    else if(i3==7) n7=(n7+s3)%10;
    else if(i3==8) n8=(n8+s3)%10;
    else if(i3==9) n9=(n9+s3)%10;
    
    printf("%d %d %d %d %d %d %d %d %d %d\n",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);

    
    return 0;
}
