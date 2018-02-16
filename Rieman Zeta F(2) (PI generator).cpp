//A.sim
//August 1st 2017
//Pi Generator

#include<stdio.h>
#include<math.h> 
#include<cstdio>
#include<iostream>
#include <iomanip>  


void generateSequence()
{
		
	double x;
	double s=1;
	double a=0;
	double p=1;
	int z;
	int i=1;

	int dub=2;
	printf("How many terms of the Riemann zeta function(2) would you like to generate...?\n");
	scanf("%d",&z);
	z++;
	
	
	
do	{
		
	i++;
	i++;
		
	x=p/i;
 	a=x;
 	s=s-a;
 	
	
	i++;
	i++;
	
	x=p/i;
 	a=x;
 	s=s+a;
 	
 	std::cout << std::setprecision(22) << s*4 << "\n";

	}while(i<z*4);
	
}


int main(){

		generateSequence();
	 
 }
