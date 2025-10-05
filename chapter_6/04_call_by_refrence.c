#include <stdio.h>
//THE vlaue of a can be change 
sum(int*,int*);
sum(int* a, int* b){
    *a =10;
    return *a+*b;
}
int main(){
    int a =4,b=5;
printf("The sum of a and b is %d\n",sum(&a,&b));
printf("The value of a is %d",a);
    return 0;
}