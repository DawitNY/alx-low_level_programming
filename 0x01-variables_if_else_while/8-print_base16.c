#include <stdlib.h>                                                                                                                             
#include <time.h>                                                                                                                               
#include <stdio.h> 

/**                                                                      
 **main -> assgin random number each time program is run                 
 **based a condition                                                     
 **Return: 0                                                             
 */

                                                                   
int main(void){                                                                                                                                 
	int c;                                                                       

	for (c='0'; c<= '9'; ++c)                                                   	putchar (c);  

	for (c='a'; c<= 'f'; ++c)                                                   	putchar (c);  
	         
	putchar ('\n');                                                                                                                                 
	return 0;                                                                                                                                       
} 

