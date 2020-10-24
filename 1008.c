#include <stdio.h>
int main()
{
   int empno,hour;
   float salary,tsalary;

   scanf("%d %d %f",&empno,&hour,&salary);

   tsalary=hour*salary;

   printf("NUMBER = %d\n",empno);
   printf("SALARY = U$ %.2f\n",tsalary);






}
