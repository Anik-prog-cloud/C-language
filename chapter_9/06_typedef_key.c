#include <stdio.h>
#include <string.h>

typedef struct employee
{
   int code;
   float salary;
   char name[10];
}Emp;

int main(){
Emp e1,e2;
Emp* ptr=&e1;
e1.code=4511;
strcpy(e1.name,"Anik");
e1.salary=52.44;

printf("%d %f %s\n",e1.code,e1.salary,e1.name);
printf("%d %f %s\n",ptr->code,ptr->salary,ptr->name);

    return 0;
}