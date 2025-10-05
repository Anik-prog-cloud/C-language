#include <stdio.h>
int main(){

    int a =5;
    int*ptr =&a;

    printf("The addres of a is %u\n",&a);
    printf("The addres of a is %u\n",ptr);
    ptr++;
    printf("The addres of a is %u\n",ptr);//increase by 4 byte in integer


    return 0;
}