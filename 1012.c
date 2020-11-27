
#include <stdio.h>
int main()
{
    float pi,volume;
    int r;

    scanf("%d",&r);
    pi=3.14159;

    volume = (4/3.0)*pi*r*r*r;

    printf("Volume = %.3f\n",volume);


    return 0;

}
