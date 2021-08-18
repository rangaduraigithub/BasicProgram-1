#include<stdio.h>

void printcharacterpattern( int num)

   {

     int i,j;

     char s;

    for(i=0;i<num;i++,s++)

    {

      s='a';

      for(j=0;j<=i;j++)

      {

         printf("%c", s++);

      }

       printf("\n");     }

  }

int main()

{

  int n;

  scanf("%d",&n);

   printcharacterpattern(n);

  return 0;

}
