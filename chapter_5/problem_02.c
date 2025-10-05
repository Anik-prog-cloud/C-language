#include <stdio.h>

float C2F(float);
float C2F(float c){
    return (9/5)*c+32;
}
int main(){
float c =45;
printf("Celsius to Fahrenheit for %f is %.2f",c,C2F(c));
    return 0;
}