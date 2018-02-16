//Harmonic Series up to n Generator;
//A.sim
//August 1st 2017

#include<stdio.h>
#include<math.h> 
#include<cstdio>

void generateSequence()
{
		
	double x=0;
	double s=0;
	double a=0;
	double p=1;
	int z;
	
	printf("Generate Harmonic Series up to term number?\n");
	scanf("%d",&z);
	z++;
	
	for (int i=1; i<z;i++)
	{
		x=p/i;
 		a=x;
 		s=a+s;
 	
		printf("%f\n", s);	
	}
	
}


int main(){
	
	char imp;
	
	printf("Press e to exit, or any other character to generate a sequence\n");
	
	 while (imp!='e'){
		
		scanf("%c", &imp);
		generateSequence();

	}
	 
 }
