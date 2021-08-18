#include<stdio.h>
 int main(){
     int needle,c=0,rem;
     long int num;
     scanf("%d\n",&needle);
     scanf("%ld",&num);
     while(num!=0){
         rem=num%10;
         if(rem==needle)
             c++;
         num=num/10;
     }
     printf("Needle %d occurs %d times in the hash",needle,c);
     
     
 }
// ip 2
//   22345628
//   op 2 present 3 times 
