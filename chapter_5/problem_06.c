#include <stdio.h>
int sum(int);
int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n;
}

int main(){
    int n =5;
printf("The sum of natural numbers is %d",sum(n));
    return 0;
}