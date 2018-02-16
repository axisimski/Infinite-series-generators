//A.sim
//August 1st 2017
//Alternating Harmonic Series Ln(2) Generator

#include<stdio.h>
#include<math.h> 
#include<cstdio>
#include<iostream>
#include <iomanip>  

void generateSequence()
{
		
	double x=0;
	double s=0;
	double a=0;
	double p=1;
	int z;
	int dub=2;
	printf("Generate the alternating harmonic series up to...?\n");
	scanf("%d",&z);
	z++;
	
	for (int i=1; i<z;i++)
	{
		
		if (i%dub!=0){
		
		x=p/i;
 		a=x;
 		s=a+s;
 	
 	
		}
	 
		if (i%dub==0){
		
		x=p/i;
 		a=x;
 		s=s-a;
 	
 	std::cout << std::setprecision(33) << s << "\n";
		}
	 
	
	
	}
	
}


int main(){

		generateSequence();
	 
 }
