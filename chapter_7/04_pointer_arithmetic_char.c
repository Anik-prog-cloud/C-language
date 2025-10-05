#include <stdio.h>
int main(){

    char a ='A';
    char*ptr =&a;

    printf("The addres of a is %u\n",&a);
    printf("The addres of a is %u\n",ptr);
    ptr++;
    printf("The addres of a is %u\n",ptr);//increase by 1 byte in character


    return 0;
}