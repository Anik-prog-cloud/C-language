#include <stdio.h>

//use a custom function to calculate string length
int mystrlen(char str[]){
int i =0,count;
char c = str[i];
while(c!='\0'){
    c = str[i];
    i++;

}
count=i-1;
return 0;
}

//custom function to compare two strings
//use a custom function to copy one string to another
void mystrcpy(char target[],char source[]){
    for(int i =0; i<mystrlen(source); i++){
        target[i]=source[i];
    }
    target[mystrlen(source)]='\0';
}
int main(){
char source[]="Anik das";
char target[30];
mystrcpy(target,source);
printf("%s %s",source,target);
    return 0;
}