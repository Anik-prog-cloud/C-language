#include <stdio.h>

int main(){
int a =4;
printf("%d %d %d",a,++a,a++);
//6 6 4 evalution order right to left because is not defined in C
//4 5 5 evaluation order left to right
    return 0;
}