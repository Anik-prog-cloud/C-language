#include <stdio.h>
int main(){
    char grade ;
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks<=100 && marks>=90){
        grade = 'A';
    }
    else if(marks<=90 && marks>=80){
        grade = 'B';
    }
       else if(marks<=80 && marks>=50){
        grade = 'C';
    }
       else if(marks<=50 && marks>=30){
        grade = 'D';
    }
       else if(marks<=30 && marks>=0){
        grade = 'E';
    }
    printf("Your grade is :%c",grade);
    return 0;


}