#include "stdio.h"
#include "stdlib.h"
#define tam 10

int main (){
	
	int num1,num2,v[tam],i=0;

	
	do{		
		
	fflush(stdin);
	
	scanf("%d:%d",&num1,&num2);
	
	v[i]=num1*60;
	v[i]=v[i]+num2;
	v[i]=1440-v[i];
	

	i++;
	
	

	}while(num2!=00);
	
	i=0;

	while(v[i+2]!=0000){
	
			
	printf("%d\n",v[i]);
	
	i++;

	}

	
	return 0;
}
