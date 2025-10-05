#include <stdio.h>
int sum(int,int);

int sum(int x, int y){
  //  printf("The sum of x and y is %d\n",x+y);
    return x+y;
}
int main(){
    int a =10,b =69;
   int c= sum(a,b);
   printf("%d\n",c);
 
    int a1=44,b1=43;
   int d = sum(a1,b1);
printf("%d\n",d);

    return 0;
}