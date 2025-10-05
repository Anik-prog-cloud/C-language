#include <stdio.h>

struct vector{
    int i;
    int j;
    //for three dimensional use k variable
};
int main(){
struct vector v ={1,2};
printf("The value of vector is %di + %dj",v.i,v.j);


return 0;
}