#include <stdio.h>
int main()
{
    int y,m,d,td,rd1;

    scanf("%d",&td);

    y=td/365;

    rd1=td%365;

    m=rd1/30;

    d=rd1%30;

    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);


 return 0;
}
