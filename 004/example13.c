#include <stdio.h>
int main()
{
	for(int i=0; i<3; i++) 
		for(int j=0; j<3; j++) 
			printf("i %d j %d\n",i,j);
			
	for(int i=0; i<3; i++) 
		for(int j=0; j<3; j++) {
			printf("i %d j %d\n",i,j);
		}
		
	for(int i=0; i<3; i++) { 
		for(int j=0; j<3; j++) {
			printf("i %d j %d\n",i,j);
		}
	}	
	return 0;
}

