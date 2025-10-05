#include<stdio.h>
int main(){
   int marks[]={34,54,90,12};
   int* ptr =&marks[0];
   //int* ptr = marks is same as  int* ptr =&marks[0];
   for(int i =0; i<4; i++){
   // printf("The marks at index %d is %d\n",i,marks[i]);
    printf("The marks at index %d is %d\n",i,*ptr);
    ptr++;
   }
    return 0;

}