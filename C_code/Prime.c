#include<stdio.h>

void main()
{
 int c,k;
 printf("打印100以内的所有素数：\n");
 for(int a =2;a<100000;a++)
  {
   c=0;
   for(int b= 2;b<a;b++)
    {
      if(a%b==0)
          ++c;
    }
    if(c==0)
    {
     k++;
     printf("%d\t",a);
     if(k%8==0)
      printf("\n");
    }
  }
  printf("\n");
}
