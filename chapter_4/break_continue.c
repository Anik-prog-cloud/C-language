#include <stdio.h>
int main(){
    for(int i =0; i<15; i++){
        if(i==5){
            break;//exit the loop now!
            //continue; //exit this iteration now or skip this i
        }
        printf("%d\n",i);
    }
    printf("For loop is done!");
    return 0;
}