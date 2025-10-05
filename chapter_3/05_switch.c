#include <stdio.h>
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("You entered 1");
        break;
     case 2:
     printf("You entered 2");
     break;

    default:
    printf("pls entered 1 or 2");
        break;
    }
}