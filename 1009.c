#include <stdio.h>
int main()
{
   char name[50];
   double salary,sold,tsalary;

   scanf("%s",&name);
   scanf("%lf %lf",&salary,&sold);

   tsalary=salary+(sold*15/100);

   printf("TOTAL = R$ %.2lf\n",tsalary);

    return 0;
}
