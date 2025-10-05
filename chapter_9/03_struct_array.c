#include <stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){

    struct employee facebook[100];

    facebook[0].code=100;
    facebook[1].code=77;
    struct employee anik={100,71.22,"Anik"};
    printf("%d %f %s",anik.code,anik.salary,anik.name);
    return 0;
}