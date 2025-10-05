#include <stdio.h>
typedef struct Employee{
    int salary;
    float score;
}Employee;
int main(){
Employee e1;
Employee* ptr= &e1;
//(*ptr).salary = 56;
//(*ptr).score=56.4;

ptr->salary=56;
ptr->score=45.6;

printf("The value of salary is %d and score is %.2f\n",ptr->salary,ptr->score);
}