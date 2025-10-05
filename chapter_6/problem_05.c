#include <stdio.h>
int main(){
int i =10;
int* ptr1=&i;
int** ptr2=&ptr1;
printf("The addres of i is %p\n",&i);
printf("The value of i at addres ptr is %d\n",*ptr1);
printf("The value of i at addres ptr is %d\n",**ptr2);

    return 0;
}