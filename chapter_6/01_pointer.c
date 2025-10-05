#include<stdio.h>
int main(){

    int i =10;
    int *j =&i;
    //char *ch_ptr;
    //float *f1_ptr;
    printf("The addres of i is %p\n",&i);
    printf("The addres of i is %p\n",j);
    printf("The value at address j is %d\n",*j);
    return 0;
}