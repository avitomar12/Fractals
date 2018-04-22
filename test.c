#include <stdio.h>
#include <complex.h>
#include <math.h>

float power(complex C, int n)
{   
    complex Temp;
    Temp = C;

    for(int i=1;i<n;i++)
    {
        Temp = Temp*C;
    }
    
    return (Temp);
}

int main()
{   
    complex C,X, T;

 //   T = 2 + I*10;
    int n=2;
    
    C = 1 + 1*I;

    X=C;

    for(int i=1;i<n;i++)
    {
        X *= C;    
    }


 //   X = power(C,2);  
//    X= C * C;//  +T;   

    printf("Real Part = %f\tImaginary Part = %f\n",creal(C),cimag(C));
    printf("Real Part = %f\tImaginary Part = %f\n",creal(X),cimag(X));    
}