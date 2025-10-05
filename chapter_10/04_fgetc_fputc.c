#include<stdio.h>

int main(){
FILE *ptr;
ptr = fopen("anik.txt","w");//use a(append) will add num to the file again and again after run

 char c = fgetc(ptr); //used to read a first character from a file
printf("%c",c)

fputc('c',ptr);//add the character c like apend in file 
return 0;


    return 0;
}