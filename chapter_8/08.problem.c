#include <stdio.h>
#include <string.h>
int main()
{
char c='r';
int contains=0;
    char str[] = "Ravi";
    for (int i = 0; i < strlen(str); i++)
    {
       if(str[i]==c){
        contains=1;
        break;
       }
    }
    if(contains){
        printf("yes its contain\n");
    }
    else{
        printf("does not contain");
    }
    
    return 0;
}