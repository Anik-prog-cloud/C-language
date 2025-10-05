#include <stdio.h>
int main(){
char st[6];
//scanf("%s",st); takes direct input of string "abc";
//for take input char by char we use for loop
for(int i =0; i<5;i++){
    scanf("%c",&st[i]);
    fflush(stdin);// its takes input also from by clicking enter to privent read 

}
st[5] = '\0'; // null character to terminate the string
printf("%s",st);

    return 0;
}