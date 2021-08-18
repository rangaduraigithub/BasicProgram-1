#include<stdio.h>
int main(){
	int n1,n2,n3;
	scanf("%d%d%d",&n1,&n2,&n3);// 3 5 8
	if(n1>n2&&n1>n3){
		printf("%d",n1);
	}
	else if(n2>n1&&n2>n3){
		printf("%d",n2);
		
	}
	else{
		printf("%d",n3);
	}
	
}
//ip:3 5 8
//op:8
//print the max value 8
