#include <stdlib.h>                                                                                                                             
#include <time.h>                                                                                                                               
#include <stdio.h>                                                                                                                              
/**                                                                                                                                             
 **main -> run a loop                                                                                                                           
 **use loop to output alphabet                                                                                                                  
 **Return: 0                                                                                                                                    
 **/                                                                                                                                            
                                                                                                                                                
int main(void){                                                                                                                                 int c;                                                                                                                                          
for (c = 'a'; c <= 'z'; ++c)                                                                                                                  
	putchar (c); 
for (c = 'A'; c <= 'Z'; ++c)                                                                                                                    	putchar (c);         
putchar ('\n');                                                                                                                                 
return 0;                                                                                                                                       
}   
