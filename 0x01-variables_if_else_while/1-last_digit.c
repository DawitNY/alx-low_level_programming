#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**                                                                              
 **main -> assgin random number each time program is run                         
 **based a condition                                                             
 **Return: 0                                                                     
 **/ 


int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int i = abs(n % 10);
printf("Last digit of %d is ",n);
if (i > 5)
{
	printf ("greater than 5");
}                                                                             
else if (i == 0) 
{              
	printf("0");                                                
}                                                                                
else 
{                                                                           
	printf("less than 6 not 0");                                           
}                          
return (0);   
}

           
