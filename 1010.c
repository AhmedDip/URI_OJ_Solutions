#include <stdio.h>
int main(){

  int code1,units1,code2,units2;
  double price1,price2,tprice1,tprice2,pay;

  scanf("%d %d %lf\n",&code1,&units1,&price1);
  scanf("%d %d %lf",&code2,&units2,&price2);

   tprice1=units1*price1;
   tprice2=units2*price2;
   pay=tprice1+tprice2;

   printf("VALOR A PAGAR: R$ %.2lf",pay);

   return 0;


}
