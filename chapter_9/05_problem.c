#include <stdio.h>

typedef struct c{
    int real;
    int imaginary;
}Complex;

void display(Complex c){
    
    printf("The value of compleax number is is %d + %di\n",c.real,c.imaginary);
}
int main(){
    for ( int i = 0; i < 5; i++)
    {
        
        Complex carr[5];;
        printf("Enter real part\n");
        scanf("%d",&carr[i].real);
        printf("Enter Imaginary part\n");
        scanf("%d",&carr[i].imaginary);
        display(carr[i]);
    }
    

return 0;
}