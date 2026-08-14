#include <stdio.h>
int main(){
    int a;
    printf("enter input enter the value of a");
    scanf("%d",&a);
    int b;
    printf("enter the value of b");
    scanf("%d",&b);  
    a=a+b;
    b=a-b;
    a=a-b;

    printf("value of a after swaping=%d\n",a);
    printf(" value of b after swaping=%d\n",b);
    return 0;

}