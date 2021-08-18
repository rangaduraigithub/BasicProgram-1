#include<stdio.h>

void patternPrint(int n)

{

for(int i=0;i<n;i++)

{

for(int j=0;j<=i;j++)

{

printf("1");

}

printf("\n");

}

}

int main()

{

int n;

scanf("%d",&n);

patternPrint(n);

}
