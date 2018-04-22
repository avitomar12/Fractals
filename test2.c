#include <stdio.h>
#include <math.h>

int arraypass(int* a)
{   
    printf("%d\n",a[1]);
    return(0);
}

int main()
{
    int a[]={1,2};

    printf("%d\n",a[0]);
    arraypass(&a);
}