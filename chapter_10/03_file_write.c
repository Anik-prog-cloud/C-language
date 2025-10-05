#include<stdio.h>

int main(){
FILE *fptr;
fptr = fopen("anik.txt","w");//use a(append) will add num to the file again and again after run
int num =456;
fprintf(fptr,"%d",num);
fclose(fptr);
    return 0;
}