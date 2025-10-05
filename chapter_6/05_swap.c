#include <stdio.h>
swap(int*,int*);
swap(int* a, int* b){
    int temp;
    temp= *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a =5,b =9;
    swap(&a,&b);
    printf("The value of a is %d and b is %d",a,b);
}