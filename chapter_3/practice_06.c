#include <stdio.h>
int main(){
    int a=2,b=5,c=8,d=1;

    if(a>b && a>c && a>d){
        printf("The greatest of all is %d\n",a);
    }

     else if(b>a && b>c && a>d){
        printf("The greatest of all is %d\n",b);
    }
    else if(c>a && c>b && c>d){
        printf("The greatest of all is %d\n",c);
    }
    else if(d>a && d>b && d>c){
        printf("The greatest of all is %d\n",d);
    }
    return 0;
}