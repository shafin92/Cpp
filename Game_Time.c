#include<stdio.h>
int main()
{
int a , b, duration;
scanf("%d %d",&a,&b);
if ( a < b)
{
    duration = b - a;
}
else
 duration = 24 -a+b;
printf("O JOGO DUROU %d HORA(S)\n",duration); 


  return 0;
}
