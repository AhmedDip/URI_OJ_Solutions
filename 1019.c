#include <stdio.h>
int main()
{
    int ts,s,m,h,rs;

    scanf("%d",&ts);

    h=ts/3600;
    rs=ts%3600;
    m=rs/60;
    s=rs%60;


    printf("%d:%d:%d\n",h,m,s);








}
