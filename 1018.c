#include<stdio.h>

struct intermediate
{

char label[10];
char mnem[10];
char op[10];
}res;
struct symbol
{
char symbol[10];
int addr;
}sy;
void main()
{
FILE *s1,*p1;

s1=open("inter.txt","r+");
p1=open("symbol.txt","w");
while(!feof(s1))
{
scanf(s1,"%d %s %s %s",&res.label,&res.mnem,&res.op);
if(strcmp(res.label,"NULL")!=0)
{
strcpy(sy.symbol,res.label);

printf(p1,"%s\t%d\n",sy.symbol);
}
}

printf("Symbol table created");
getch();
}
