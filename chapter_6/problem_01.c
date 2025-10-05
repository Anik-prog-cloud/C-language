#include <stdio.h>
int main(){
int i =10;
int* ptr=&i;
printf("The addres of i is %p\n",&i);
printf("The value of i at addres ptr is %d\n",*ptr);
    return 0;
}